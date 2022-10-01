//
// Created by deturpant on 01.10.22.
//
#ifndef LONGARITHMETIC_BIGINT_H
#define LONGARITHMETIC_BIGINT_H

#include <vector>
#include <string>
#include <bits/stdc++.h>
namespace KVA {

    class BigInt {
    public:
        BigInt() {
            number.resize(1);
            number[0] = 0;
        }
        BigInt(std::string s) {
            for (char digit : s) {
                number.push_back(digit - '0');
            }
            reverse(number.begin(), number.end());
        }
        void printInt() {
            for (int i = number.size()-1; i>=0; i--) {
                std::cout << number[i];
            }
            std::cout << "\n";
        }
    private:
        std::vector<int> number;
    };

} // KVA

#endif //LONGARITHMETIC_BIGINT_H
