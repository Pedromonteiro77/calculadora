#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <string>

double sum(double & n1, double & n2);

double subtract(double & n1, double & n2);

double multiply(double & n1, double & n2);

double divide(double & n1, double & n2);

void verifyName(std::string & nome, char & opc);

void calcula(std::string & nome, double & n1, double & n2, char & opera, char & opc);

#endif