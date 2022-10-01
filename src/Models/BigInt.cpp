//
// Created by deturpant on 01.10.22.
//

#include "BigInt.h"

using namespace std;
using namespace KVA;
namespace KVA {
    BigInt::BigInt() {
        number.resize(1);
        number[0] = 0;
    }

    BigInt::BigInt(string s) {
        for (char digit: s) {
            number.push_back(digit - '0');
        }
        reverse(number.begin(), number.end());
    }

    void BigInt::printInt() const {
        for (int i = number.size() - 1; i >= 0; i--) {
            cout << number[i];
        }
        cout << "\n";
    }
} // KVA