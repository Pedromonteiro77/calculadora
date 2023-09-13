#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <string>

class Calculadora {
private:
    std::string name;
    double n1, n2;
    char opera;
    char opc;

public:
    void calculadora() {
        sum();
        subtract();
        multiply();
        divide();
        verifyName();
        calcula();
    }

    std::string getName() {
        return name;
    }

    double getN1() {
        return n1;
    }

    double getN2() {
        return n2;
    }

    char getOpera() {
        return opera;
    }

    char getOpc() {
        return opc;
    }

    double sum();

    double subtract();

    double multiply();

    double divide();

    void verifyName();

    void calcula();
};

#endif