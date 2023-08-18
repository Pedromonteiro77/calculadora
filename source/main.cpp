#include <iostream>
#include <string>
#include <memory>

//Funções de Soma, Subtração, Multiplicação e Divisão
double soma(double a, double b) {
    return a + b;
}

double subtrai(double a, double b) {
    return a - b;
}

double multiplica(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {
    //Variaveis 
    std::unique_ptr<std::string> nome(new std::string);
    std::unique_ptr<double> n1(new double);
    std::unique_ptr<double> n2(new double);
    std::unique_ptr<char> opera(new char);
    char opc;
    
    //Pergunta o nome do usuario 
    std::cout << "Oi Bem vindo me diga seu nome: ";
    std::cin >> *nome;

    //Loop que inicia a calculadora
    while(true) {
    std::cout << "Oi " << *nome << " Me diga o que voce gostaria de calcular: soma(+), subtracao(-), multiplicacao(*), divisao(/): ";
    std::cin >> *opera;

    //Verifica se o usuario digitou certo os simbolos matematicos
    if((*opera != '+') && (*opera != '-') && (*opera != '*') && (*opera != '/')) {
        std::cout << "INVALIDO. Por favor digite um dos caracteres: (+), (-), (*), (/). Vamos tentar novamente" 
        << std::endl;
        system("Pause");
        system("clear");
        continue;
    }
    
    //Pede que o usuario digite os numeros que serão calculados
    std::cout << "Agora digite o primeiro numero: ";
    std::cin >> *n1;
    std::cout << "Agora digite o segundo numero: ";
    std::cin >> *n2;

    //Verifica qual a operação e executa a função pedida
    if(*opera == '+') {
        std::cout << "A soma de " << *n1 << " e " << *n2 << " e igual a: " << soma(*n1, *n2) 
        << std::endl;
    }
    else if(*opera == '-') {
        std::cout << "A subtracao de " << *n1 << " e " << *n2 << " e igual a: " << subtrai(*n1, *n2) 
        << std::endl;
    }
    else if(*opera == '*') {
        std::cout << "A multiplicacao de " << *n1 << " e " << *n2 << " e igual a: " << multiplica(*n1, *n2) 
        << std::endl;
    }
    else if(*opera == '/') {
        //Verifica se o usuario esta dividindo por 0 e avisa que não e possivel
        if((*n2 == 0)) {
            std::cout << "Desculpe nao e possivel dividir por zero. Vamos tentar novamente" << std::endl;
            system("pause");
            system("clear");
            continue;
        }
        else {
            std::cout << "A divisao de " << *n1 << " e " << *n2 << " e igual a: " << divide(*n1, *n2) 
            << std::endl;
        }
    }

    //Pergunta ao usuario se ele quer fazer outra conta
    std::cout << "Voce gostaria de fazer outro calculo? sim(s), nao(n): ";
    std::cin >> opc;

    //Verifica se foi digitado 's' ou 'S'  
    if((opc == 's') || (opc == 'S')) {
        system("clear");
        continue;
    }
    //Finaliza o programa se digitado não ou qualquer outra coisa
    else {
        system("clear");
        std::cout << "Ok " << *nome << " obrigado por usar meu programa :)" << "\n";
        break;
    }

    }

    return 0;
}
