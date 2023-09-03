#include <iostream>
#include "..\header\calculadora.h"
#include <string>

int main() { 
    std::string nome;
    double n1;
    double n2;
    char opera;
    char opc;

    verifyName(nome, opc);

    calcula(nome, n1 , n2, opera, opc);

    return 0;
}