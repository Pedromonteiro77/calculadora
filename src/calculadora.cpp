#include <iostream>
#include "..\header\calculadora.h"

double sum(double & n1, double & n2) {
    return n1 + n2;
}

double subtract(double & n1, double & n2) {
    return n1 - n2;
}

double multiply(double & n1, double & n2) {
    return n1 * n2;
}

double divide(double & n1, double & n2) {
    return n1 / n2;
}

void verifyName(std::string & nome, char & opc) {
    std::system("cls");
    
    while(nome.empty()) {
        while(nome.empty()) {
            std::cout << "Oi Bem vindo me diga seu nome: ";
            std::getline(std::cin, nome);
            if(nome.empty()) {
                std::cerr << "ERRO, Digite seu nome ou como gostaria de ser chamado!" << std::endl;
                std::cout << "Pressione Enter para continuar...";
                std::cin.get(); 
                std::system("cls");
            }
        }

        while(true) {
            std::cout << "Seu nome e " << nome << " esta correto? sim(s), nao(n): ";
            std::cin >> opc;
            std::cin.ignore();

            if((opc == 's') || (opc == 'S')) {
                std::system("cls");
                break;
            } 
            else {
                nome.clear();
                std::system("cls");
                break;
            }
        }
    }
}

void calcula(std::string & nome, double & n1, double & n2, char & opera, char & opc) {
    while(true) {
        std::cout << "Oi " << nome << " Me diga o que voce gostaria de calcular: soma(+), subtracao(-), multiplicacao(*), divisao(/): ";
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
            std::cout << n1 << " + " << n2 << " = " << sum(n1, n2) << std::endl;
        }
        else if(opera == '-') {
            std::cout << n1 << " - " << n2 << " = " << subtract(n1, n2) << std::endl;
        }
        else if(opera == '*') {
            std::cout << n1 << " * " << n2 << " = " << multiply(n1, n2) << std::endl; 
        }
        else if(opera == '/') {
            if((n2 == 0)) {
                std::cerr << "Desculpe nao e possivel dividir por zero. Vamos tentar novamente" << std::endl;
                std::system("pause");
                std::system("cls");
                continue;
            }
            else {
                std::cout << n1 << " / " << n2 << " = " << divide(n1, n2) << std::endl; 
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
            std::cout << "Ok " << nome << " obrigado por usar meu programa :)" << "\n";
            break;
        }
    }
}