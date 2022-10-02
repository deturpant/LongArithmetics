//
// Created by deturpant on 01.10.22.
//
//-23422134.2133123E10
#include "BigReal.h"
#include <bits/stdc++.h>

namespace KVA {
    BigReal::BigReal() {}

    BigReal::BigReal(string s) {
        inputReal(s);
    }

    void BigReal::printReal() {
        if (sign == 1) cout << "-";
        if (point == mantiss.size()) cout << "0.";
        for (int i = mantiss.size() - 1; i >= 0; i--) {
            cout << mantiss[i];
            if (i == point) {
                cout << ".";
            }
        }
        cout << "E" << newOrder;
        cout << "\n";

    }

    void BigReal::normalization() {
        while (point != mantiss.size()) {
            newOrder++;
            point++;
        }
    }

    bool BigReal::isSign() const {
        return sign;
    }

    int BigReal::getNewOrder() const {
        return newOrder;
    }

    const vector<int> &BigReal::getMantiss() const {
        return mantiss;
    }

    int BigReal::getPoint() const {
        return point;
    }

    void BigReal::setSign(bool sign) {
        BigReal::sign = sign;
    }

    void BigReal::setNewOrder(int newOrder) {
        BigReal::newOrder = newOrder;
    }

    void BigReal::setMantiss(const vector<int> &mantiss) {
        BigReal::mantiss = mantiss;
    }

    void BigReal::setPoint(int point) {
        BigReal::point = point;
    }

    void BigReal::inputReal(std::string s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '-') {
                sign = 1;
            } else if (isdigit(s[i])) {
                mantiss.push_back(s[i] - '0');
            } else if (s[i] == '.') {
                point = mantiss.size() + 1;
            } else if (s[i] == 'E') {
                for (int j = i + 1; s[j] != '\0'; j++) {
                    order.push_back(s[j] - '0');
                }
                reverse(mantiss.begin(), mantiss.end());
                point = mantiss.size()+1 - point;
                break;
            }
        }
        int size = order.size();
        for (int i = 0; i != order.size(); i++, size--) {
            newOrder += order[i] * pow(10, size - 1);
        }
    }

    void BigReal::clear() {
        mantiss.resize(0);
        order.resize(0);
        newOrder = 0;
        point = 0;
        sign = 0;

    }

} // KVA