#include <stdio.h>
#include <math.h>

int main()
{
    printf("==== BEM-VINDO ====");
    
    double a,b,c;
    a = b = c = 0;
    
    char fim;
    
    do
    {
        //Ler valores de a, b e c do usuario:
        printf("\nInsira o valor de a: ");
        scanf("%lf", &a);
        
        printf("\nInsira o valor de b: ");
        scanf("%lf", &b);
        
        printf("\nInsira o valor de c: ");
        scanf("%lf", &c);
        
        //Fazer as contas:
        double d = b*b - 4*a*c; 
        if(d >= 0)
        {
            double r[2];
            r[0] = ( -b + sqrt(d) ) / ( 2*a );
            r[1] = ( -b - sqrt(d) ) / ( 2*a );
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