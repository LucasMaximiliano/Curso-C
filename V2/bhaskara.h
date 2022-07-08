#ifndef _BHASKARA_H_
#define _BHASKARA_H_

//Funcao para validacao de entrada:
void validar_input(int check, double* parametro);

//Funcao para calcular discriminante:
double calc_disc(const double a, const double b, const double c);

//Funcao para calcular formula de bhaskara:
void calc_bhaskara(const double a, const double b, const double c, double* r);

#endif