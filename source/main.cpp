#include <iostream>
#include <string>
#include <memory>

int main() { 
    std::unique_ptr<std::string> nome(new std::string);
    std::unique_ptr<double> n1(new double);
    std::unique_ptr<double> n2(new double);
    std::unique_ptr<char> opera(new char);
    char opc;

    auto soma = [](double a, double b) -> double {
        return a + b;
    };

    auto subtrai = [](double a, double b) -> double {
        return a - b;
    };

    auto multiplica = [](double a, double b) -> double {
        return a * b;
    };

    auto divide = [](double a, double b) -> double {
        return a / b;
    };
     
    std::cout << "Oi Bem vindo me diga seu nome: ";
    std::cin >> *nome;

        while(true) {
        std::cout << "Oi " << *nome << " Me diga o que voce gostaria de calcular: soma(+), subtracao(-), multiplicacao(*), divisao(/): ";
        std::cin >> *opera;

        if((*opera != '+') && (*opera != '-') && (*opera != '*') && (*opera != '/')) {
            std::cout << "INVALIDO. Por favor digite um dos caracteres: (+), (-), (*), (/). Vamos tentar novamente" 
            << std::endl;
            system("Pause");
            system("cls");
            continue;
        }
    
        std::cout << "Agora digite o primeiro numero: ";
        std::cin >> *n1;
        std::cout << "Agora digite o segundo numero: ";
        std::cin >> *n2;

        if(*opera == '+') {
            std::cout << *n1 << " + " << *n2 << " = " << soma(*n1, *n2) << std::endl;
        }
        else if(*opera == '-') {
            std::cout << *n1 << " - " << *n2 << " = " << subtrai(*n1, *n2) << std::endl;
        }
        else if(*opera == '*') {
            std::cout << *n1 << " * " << *n2 << " = " << multiplica(*n1, *n2) << std::endl; 
        }
        else if(*opera == '/') {
            if((*n2 == 0)) {
                std::cout << "Desculpe nao e possivel dividir por zero. Vamos tentar novamente" << std::endl;
                system("pause");
                system("cls");
                continue;
            }
            else {
                std::cout << *n1 << " / " << *n2 << " = " << divide(*n1, *n2) << std::endl; 
            }
        }

        std::cout << "Voce gostaria de fazer outro calculo? sim(s), nao(n): ";
        std::cin >> opc;

        if((opc == 's') || (opc == 'S')) {
            system("cls");
            continue;
        }   
        else {
            system("cls");
            std::cout << "Ok " << *nome << " obrigado por usar meu programa :)" << "\n";
            break;
        }

    }

    return 0;
}
