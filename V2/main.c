#include <stdio.h>
#include "bhaskara.h"

int main()
{
    printf("==== BEM-VINDO ====");
    
    //Parametros:
    double a,b,c;
    a = b = c = 0;
    
    //Variaveis de controle:
    char fim;
    
    do
    {
        //Ler valores de a, b e c do usuario:
        printf("\nInsira o valor de a: ");
        int check_a = scanf("%lf", &a);       //scanf retorna o numero de argumentos de entrada corretos
        //Checagem de entrada correta:
        validar_input(check_a, &a);
        
        printf("\nInsira o valor de b: ");
        int check_b = scanf("%lf", &b);
        validar_input(check_b, &b);
        
        printf("\nInsira o valor de c: ");
        int check_c = scanf("%lf", &c);
        validar_input(check_c, &c);
        
        //Fazer as contas:
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