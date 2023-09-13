#include <iostream>
#include "..\header\calculadora.h"

double Calculadora::sum() {
    return n1 + n2;
}

double Calculadora::subtract() {
    return n1 - n2;
}

double Calculadora::multiply() {
    return n1 * n2;
}

double Calculadora::divide() {
    return n1 / n2;
}

void Calculadora::verifyName() {
    std::system("cls");
    
    while(name.empty()) {
        while(name.empty()) {
            std::cout << "Oi Bem vindo me diga seu nome: ";
            std::getline(std::cin, name);
            if(name.empty()) {
                std::cerr << "ERRO, Digite seu nome ou como gostaria de ser chamado!" << std::endl;
                std::cout << "Pressione Enter para continuar...";
                std::cin.get(); 
                std::system("cls");
            }
        }

        while(true) {
            std::cout << "Seu nome e " << name << " esta correto? sim(s), nao(n): ";
            std::cin >> opc;
            std::cin.ignore();

            if((opc == 's') || (opc == 'S')) {
                std::system("cls");
                break;
            } 
            else {
                name.clear();
                std::system("cls");
                break;
            }
        }
    }
}

void Calculadora::calcula() {
    while(true) {
        std::cout << "Oi " << name << " Me diga o que voce gostaria de calcular: soma(+), subtracao(-), multiplicacao(*), divisao(/): ";
        std::cin >> opera;

        if((opera != '+') && (opera != '-') && (opera != '*') && (opera != '/')) {
            std::cerr << "INVALIDO. Por favor digite um dos caracteres: (+), (-), (*), (/). Vamos tentar novamente" 
            << std::endl;
            std::system("Pause");
            std::system("cls");
            continue;
        }
    
        std::cout << "Agora digite o primeiro numero: ";
        std::cin >> n1;
        std::cout << "Agora digite o segundo numero: ";
        std::cin >> n2;

        if(opera == '+') {
            std::cout << n1 << " + " << n2 << " = " << sum() << std::endl;
        }
        else if(opera == '-') {
            std::cout << n1 << " - " << n2 << " = " << subtract() << std::endl;
        }
        else if(opera == '*') {
            std::cout << n1 << " * " << n2 << " = " << multiply() << std::endl; 
        }
        else if(opera == '/') {
            if((n2 == 0)) {
                std::cerr << "Desculpe nao e possivel dividir por zero. Vamos tentar novamente" << std::endl;
                std::system("pause");
                std::system("cls");
                continue;
            }
            else {
                std::cout << n1 << " / " << n2 << " = " << divide() << std::endl; 
            }
        }

        std::cout << "Voce gostaria de fazer outro calculo? sim(s), nao(n): ";
        std::cin >> opc;

        if((opc == 's') || (opc == 'S')) {
            std::system("cls");
            continue;
        }   
        else {
            std::system("cls");
            std::cout << "Ok " << name << " obrigado por usar meu programa :)" << "\n";
            break;
        }
    }
}