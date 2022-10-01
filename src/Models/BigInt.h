//
// Created by deturpant on 01.10.22.
//
#ifndef LONGARITHMETIC_BIGINT_H
#define LONGARITHMETIC_BIGINT_H

#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;
namespace KVA {

    class BigInt {
    public:
        BigInt();

        BigInt(string s);

        void printInt() const;

    private:
        std::vector<int> number;
    };

} // KVA

#endif //LONGARITHMETIC_BIGINT_H
