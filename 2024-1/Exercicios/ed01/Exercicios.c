#include <stdio.h>
#include <stdlib.h>

void entercontinuar(){
    printf("\nDigite enter para continuar\n");
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Limpa o buffer de entrada
    getchar(); // Aguarda por Enter
}

void metodo1 (void){
    double valor = 0;
    double res = 0;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%lf", &valor);

    res = (valor*3) * (valor*3);
    printf("O valor da area do quadrado com o lado 3 vezes maior e %2.lf", res);
    entercontinuar();

}

void metodo2 (void){
    double valor = 0;
    double area = 0;
    double perimetro = 0;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%lf", &valor); 

    valor = valor / 2;
    area = valor * valor;
    perimetro = valor * 4;

    
}
int main(int argc, char const *argv[])
{
    int opcao = 0;
    do{
    printf("0 - Sair");
    printf("\n1 - Programa 0111");
    printf("\n2 - Programa 0112");
    printf("\n3 - Programa 0113");
    printf("\n4 - Programa 0114");
    printf("\n5 - Programa 0116");
    printf("\n7 - Programa 0117");
    printf("\n8 - Programa 0118");    
    printf("\n9 - Programa 0119");    
    printf("\n10 - Programa 0120\n");        
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 0:
        break;
    case 1:
        metodo1();
        break;
    default:
        break;
    }//end switch
    } while( opcao != 0);
}