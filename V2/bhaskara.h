#ifndef _BHASKARA_H_
#define _BHASKARA_H_

//Função para validação de entrada:
void validar_input(int check, double* parametro);

//Função para calcular discriminante:
double calc_disc(const double a, const double b, const double c);

//Função para calcular fórmula de Bhaskara:
void calc_bhaskara(const double a, const double b, const double c, double* r);

#endif