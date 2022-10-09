//
// Created by deturpant on 25.09.22.
//

#ifndef LAB1_MYEXCEPTION_H
#define LAB1_MYEXCEPTION_H
#include <string>
#include <string_view>
namespace KVA {

    class MyException {
    private:
        void logging();
        std::string m_error;
    public:
        MyException(std::string error);
        const char* getError() const;
    };

} // KVA

#endif //LAB1_MYEXCEPTION_H
