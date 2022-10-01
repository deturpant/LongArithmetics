#include <iostream>
#include "Models/BigInt.h"
#include "Models/BigReal.h"

using namespace KVA;

int main() {
    std::cout << "Int: ";
    BigInt a("21343254345894583589214213434");
    a.printInt();
    BigReal b("1234378445.612213423433424322489E100");
    BigReal result = a*b;
    return 0;
}
