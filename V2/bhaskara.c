#include "bhaskara.h"
#include <stdio.h>
#include <math.h>

/* 
 * Como compilar esse programa:
 * gcc ./V2/main.c ./V2/bhaskara.c -o ./bin/V2/v2.exe -lm
 * 1.) Compilar todos os códigos-fonte
 * 2.) Buscar especificamente pela biblioteca de matemática por estar separada das outras (Linker)
 * Veja: https://stackoverflow.com/questions/10409032/why-am-i-getting-undefined-reference-to-sqrt-error-even-though-i-include-math
 */

//Funcao para validar entrada:
void validar_input(int check, double* ptr_parametro)
{
     while (!check)
        {
            printf("\nFavor inserir um numero: ");
            check = scanf("%*c%lf", ptr_parametro); //*c ignora o char newline
        }                                           //scanf ignora whitespace com char, mas nao com numeros, por isso o mecanismo diferente
}

//Funcao para calcular discriminante:
double calc_disc(const double a, const double b, const double c)
{
    return b*b - 4*a*c;
}

//Funcao para calcular formula de bhaskara:
void calc_bhaskara(const double a, const double b, const double c, double* r)
{
    r[0] = ( -b + sqrt( calc_disc(a,b,c) ) ) / ( 2*a );
    r[1] = ( -b - sqrt( calc_disc(a,b,c) ) ) / ( 2*a );
}