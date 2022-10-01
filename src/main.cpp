#include <iostream>
#include "Models/BigInt.h"
#include "Models/BigReal.h"

using namespace KVA;
int main() {
    std::cout << "Hello, World!" << std::endl;
    BigInt a("2134325434589458358934");
    a.printInt();
    BigReal b("12345.6789E100");
    b.printReal();
    b.normalization();
    return 0;
}
