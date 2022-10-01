#include <iostream>
#include "Models/BigInt.h"
#include "Models/BigReal.h"

using namespace KVA;
BigReal operator*(BigInt &myInt, BigReal &myReal) {
    int sizeInt = myInt.getNumber().size();
    BigReal rezult;
    rezult.setNewOrder(myReal.getNewOrder());
    rezult.setPoint(myReal.getPoint());
    int sizeReal = myReal.getMantiss().size();
    int sizeResult = sizeInt * sizeReal + 1;
    vector<int> result(sizeResult);

    for (int i = 0; i < sizeInt; i++) {
        for (int j = 0; j < sizeReal; j++) {
            result[i + j] += myInt.getNumber()[i] * myReal.getMantiss()[j];
        }
    }
    for (int i = 0; i <result.size()+1; i++) {
        result[i+1] += result[i]/10;
        result[i]%=10;
    }
    while(result[result.size()]==0 && result[result.size()-1]==0) {
        result.resize(result.size()-1);
    }
    rezult.setPoint(sizeReal);
    rezult.setMantiss(result);
    rezult.setSign(myReal.isSign());
    cout << "Результат вычислений: ";
    rezult.normalization();
    rezult.printReal();
    cout << endl;
    return rezult;
}
int main() {
    std::cout << "Int: ";
    BigInt a("2134325434589458358934");
    a.printInt();
    BigReal b("12343782523428445.61243224789E100");
    BigReal result = a*b;
    return 0;
}
