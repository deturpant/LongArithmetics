#include <iostream>
#include "Models/BigInt.h"
#include "Models/BigReal.h"

using namespace KVA;
int main() {
    std::cout << "Hello, World!" << std::endl;
    BigInt a("2134325434589458358934");
    a.printInt();
    BigReal b("+2134423412313.21312312421334E1234");
    b.printReal();
    return 0;
}
