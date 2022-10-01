//
// Created by deturpant on 01.10.22.
//
//-23422134.2133123E10
#include "BigReal.h"

namespace KVA {
    BigReal::BigReal() {
        number.resize(1);
        number[0] = 0;
        mantiss.resize(1);
        mantiss[0] = 0;
        order.resize(1);
        order[0] = 0;
    }

    BigReal::BigReal(string s) {
        for (int i = 0; i<s.length();i++) {
            if (s[i] == '+' || isdigit(s[0])) {
                sign = 0;
            } else if (s[i] == '-') {
                sign = 1;
            } else if (isdigit(s[i])) {
                mantiss.push_back(s[i] - '0');
            } else if (s[i] == '.') {
                point = mantiss.size() + 1;
            } else if (s[i] == 'E') {
                for (int j = i+1; s[j]!='\0'; j++) {
                    order.push_back(s[j] - '0');
                }
                reverse(mantiss.begin(), mantiss.end());
                break;
            }
        }

    }

    void BigReal::printReal() {
        if (sign == 0) cout << "+";
        else cout << "-";
        for (int i = mantiss.size() - 1; i >= 0; i--) {
            cout << mantiss[i];
            if (i == point) {
                cout << ".";
            }
        }
        cout << "E";
        for (auto digit : order) {
            cout << digit;
        }
        cout << "\n";

    }
} // KVA