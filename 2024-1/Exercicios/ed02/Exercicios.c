#include <stdio.h>
#include <stdlib.h>

void metodo1(void){
    int x;
    printf("Procedimento 0211\n");
    printf("Digite um numero: \n");
    scanf("%d", &x);
    if(x%2 == 0){
        printf("PAR");
    }else{
        printf("IMPAR");
    }
}
int vinte5(int x){
    if (x>25){
        return printf("Maior que 25");
    }else if (x<25){
        return printf("Menor que 25");
    }else{
        return printf("Igual a 25");
    }
}
void metodo2(){;
   int x;
    printf("Procedimento 0212\n");
    printf("Digite um numero: \n");
    scanf("%d", &x);
    if(x%2 == 0){
        printf("PAR - ");
        vinte5(x);
    }else{
        printf("IMPAR - ");
        vinte5(x);
    }

}
int main()
{
    int opcao = 0;
    printf("0-sair\n");
    printf("1-Procedimento 0211\n");
    printf("2-Procedimento 0212\n");
    scanf("%d", &opcao);

    //  do
    switch (opcao){
        case 0:
            break;
        case 1:
            metodo1();
            break;
        case 2:
            metodo2();
            break;
        default:
            printf("ERRO");
        break;
    }
    //}while(opcao != 0);
    return 0;
}
