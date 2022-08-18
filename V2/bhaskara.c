#include "bhaskara.h"
#include <stdio.h>
#include <math.h>

//Função para validar entrada:
void validar_input(int check, double* ptr_parametro)
{
     while (!check)
        {
            printf("\nFavor inserir um numero: ");
            check = scanf("%*c%lf", ptr_parametro); //*c ignora o char newline
        }                                           //scanf ignora whitespace com char, mas nao com números, por isso o mecanismo diferente
}

//Função para calcular discriminante:
double calc_disc(const double a, const double b, const double c)
{
    return b*b - 4*a*c;
}

//Função para calcular formula de bhaskara:
void calc_bhaskara(const double a, const double b, const double c, double* r)
{
    r[0] = ( -b + sqrt( calc_disc(a,b,c) ) ) / ( 2*a );
    r[1] = ( -b - sqrt( calc_disc(a,b,c) ) ) / ( 2*a );
}