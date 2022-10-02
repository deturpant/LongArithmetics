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
        void normalization();
        void inputReal(std::string s);

        void setSign(bool sign);

        void setNewOrder(int newOrder);

        void setMantiss(const vector<int> &mantiss);

        void setPoint(int point);

        bool isSign() const;

        int getNewOrder() const;

        const vector<int> &getMantiss() const;

        int getPoint() const;
        void clear();
    private:
        bool sign = 0;
        int newOrder{};
        vector<int> mantiss;
        int point{};
        vector<int> order;

    };

} // KVA

#endif //LONGARITHMETIC_BIGREAL_H
