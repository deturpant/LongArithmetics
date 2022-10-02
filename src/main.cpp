#include <iostream>
#include "Models/BigInt.h"
#include "Models/BigReal.h"

using namespace KVA;

int main() {
    string input{};
    BigInt a;
    BigReal b;
    BigReal result;
    int index{};
    while (true) {
        std::cout << "1. Ввод целого числа\n2. Ввод действительного числа.\n3. Вычислить результат умножения\n0. Выход\nSelect--> ";
        cin >> index;
        switch(index) {
            case 1:
                cout << "Введите целое число до 30 знаков: ";
                cin >> input;
                a.inputInt(input);
                cout << "Получено число: ";
                a.printInt();
                break;
            case 2:
                cout << "Введите действительное число в формате (zn)m.nEN: ";
                cin >> input;
                b.inputReal(input);
                cout << "Получено число: ";
                b.printReal();
                b.normalization();
                cout << "Выполнена нормализация числа: ";
                b.printReal();
                break;
            case 3:
                cout << "Запущена функция вычисления результата\nПолучен результат в нормализованном виде: ";
                result = a*b;
                result.printReal();
                break;
            case 0:
                cout << "Выполнен выход из программы.";
                exit(0);
                break;
            default:
                cout << "Неверный ввод. Повторите попытку.";
                break;
        }
    }
    return 0;
}
