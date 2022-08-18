/* Este programa calcula a solução da equação de 2° grau
 * usando a fórmula de Bhaskara. Ele trabalha com quaisquer
 * coeficientes racionais e pode ser utilizado várias vezes
 * antes de terminar. Além disso, o programa verifica a
 * validez do input e utiliza funções para tornar o código
 * mais estruturado.
 */

#include <stdio.h>
#include "bhaskara.h"

/* 
 * Como compilar esse programa na linha de comando (UNIX):
 * gcc ./V2/main.c ./V2/bhaskara.c -o ./bin/V2/v2.exe -lm
 * 1.) Compilar todos os códigos-fonte
 * 2.) Buscar especificamente pela biblioteca de matemática por estar separada das outras (Linker)
 * Veja: https://stackoverflow.com/questions/10409032/why-am-i-getting-undefined-reference-to-sqrt-error-even-though-i-include-math
 */

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
        int check_a = scanf("%lf", &a);       //scanf retorna o número de argumentos de entrada corretos
        // Checagem de entrada correta:
        validar_input(check_a, &a);
        
        printf("\nInsira o valor de b: ");
        int check_b = scanf("%lf", &b);
        validar_input(check_b, &b);
        
        printf("\nInsira o valor de c: ");
        int check_c = scanf("%lf", &c);
        validar_input(check_c, &c);
        
        // Fazer as contas:
        double r[2] = {0,0};
        double d = calc_disc(a,b,c); 
        if(d >= 0)
        {
            calc_bhaskara(a,b,c,r);
            if(d > 0)
                printf("\nExistem duas raizes reais %lf e %lf.\n", r[0], r[1]);
            if(d == 0)
                printf("\nExiste somente uma raiz real %lf.\n", r[0]);      //r[0] == r[1]
        } else {
            printf("\nNao existem raizes reais.\n");
        }
        
        printf("\nPressione [N] para sair e qualquer outra tecla para continuar.\n");
        scanf(" %c", &fim);
        
    } while(fim != 'N' && fim != 'n');
    
	return 0;
}