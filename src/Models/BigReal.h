//
// Created by deturpant on 01.10.22.
//

#ifndef LONGARITHMETIC_BIGREAL_H
#define LONGARITHMETIC_BIGREAL_H
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
namespace KVA {
    class BigReal {
    public:
        BigReal();
        BigReal(string s);
        void printReal();
    private:
        vector<int> number;
        bool sign;
        vector<int> mantiss;
        int point{};
        vector<int> order;

    };

} // KVA

#endif //LONGARITHMETIC_BIGREAL_H
