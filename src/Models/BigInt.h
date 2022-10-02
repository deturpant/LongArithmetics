//
// Created by deturpant on 01.10.22.
//
#ifndef LONGARITHMETIC_BIGINT_H
#define LONGARITHMETIC_BIGINT_H

#include <vector>
#include <string>
#include "BigReal.h"
using namespace std;
namespace KVA {

    class BigInt {
    public:
        BigInt();

        BigInt(string s);

        bool isSign() const;

        void inputInt(string s);
        void printInt() const;
        void clear();
    private:
        std::vector<int> number;
        bool sign = 0;
    public:
        const vector<int> &getNumber() const;
    };
    BigReal operator*(BigInt &myInt, BigReal &myReal);
} // KVA

#endif //LONGARITHMETIC_BIGINT_H
