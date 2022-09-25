/* Este programa calcula a solução da equação de 2° grau
 * usando a fórmula de Bhaskara. Ele trabalha com quaisquer
 * coeficientes racionais e pode ser utilizado várias vezes
 * antes de terminar.
 */

#include <stdio.h>
#include <math.h>

int main()
{
    printf("==== BEM-VINDO ====");
    
    // Definir os coeficientes a, b e c tais quais:
    // p(x) = ax²+bx+c
    double a,b,c;
    a = b = c = 0;
    
    // Definir variável de controle para loop do menu:
    char fim;
    
    do
    {
        // Ler valores de a, b e c do usuario:
        printf("\nInsira o valor de a: ");
        scanf("%lf", &a);
        
        printf("\nInsira o valor de b: ");
        scanf("%lf", &b);
        
        printf("\nInsira o valor de c: ");
        scanf("%lf", &c);
        
        // Calcular o discriminante para definir o número de raízes:
        double d = b*b - 4*a*c; 
        if(d >= 0)
        {
            // Determinar as raízes usando Bhaskara:
            double r[2];
            r[0] = ( -b + sqrt(d) ) / ( 2*a );
            r[1] = ( -b - sqrt(d) ) / ( 2*a );
            if(d > 0)
                printf("\nExistem duas raizes reais %.2lf e %.2lf.\n", r[0], r[1]);
            if(d == 0)
                printf("\nExiste somente uma raiz real %.2lf.\n", r[0]);    //r[0] == r[1]
        } else {
            printf("\nNao existem raizes reais.\n");
        }
        
        printf("\nPressione [N] para sair e qualquer outra tecla para continuar.\n");
        scanf(" %c", &fim);
        
    } while(fim != 'N' && fim != 'n');
    
	return 0;
}