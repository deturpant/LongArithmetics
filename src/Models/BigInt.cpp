//
// Created by deturpant on 01.10.22.
//

#include "BigInt.h"

using namespace std;
namespace KVA {
    BigInt::BigInt() {}

    BigInt::BigInt(string s) {
        inputInt(s);
    }

    void BigInt::printInt() const {
        if (sign == 1) cout << "-";
        for (int i = number.size() - 1; i >= 0; i--) {
            cout << number[i];
        }
        cout << "\n";
    }

    const vector<int> &BigInt::getNumber() const {
        return number;
    }

    void BigInt::inputInt(string s) {
        for (char digit: s) {
            if (digit == '-') {
                sign = 1;
            } else if (digit == '+') sign = 0;
            else {
                number.push_back(digit - '0');
            }
        }
        reverse(number.begin(), number.end());
    }

    bool BigInt::isSign() const {
        return sign;
    }

    void BigInt::clear() {
        number.resize(0);
        sign = 0;
    }

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
        for (int i = 0; i < result.size() + 1; i++) {
            result[i + 1] += result[i] / 10;
            result[i] %= 10;
        }
        while (result[result.size()] == 0 && result[result.size() - 1] == 0) {
            result.resize(result.size() - 1);
        }
        rezult.setPoint(sizeReal);
        rezult.setMantiss(result);
        if ((myInt.isSign()==0 && myReal.isSign()==1) || (myInt.isSign()==1 && myReal.isSign()==0)) {
            rezult.setSign(1);
        }
        else {
            rezult.setSign(0);
        }
        rezult.normalization();
        return rezult;
    }
} // KVA