/* Este programa calcula as raízes do polinômio
 * p(x) = 2x²+4x-1
 * usando a fórmula de Bhaskara.
 */

#include <stdio.h>
#include <math.h>

int main() {

    // Aplicar a fórmula de Bhaskara:
    double r1 = (-4 - sqrt(4*4 - 4*2*-1) ) / (2*2);
    double r2 = (-4 + sqrt(4*4 - 4*2*-1) ) / (2*2);


    // Mostrar os resultados ao usuário:
    printf("O polinômio possui as raizes %.2lf e %.2lf\n", r1, r2);

    return 0;
}