/*
 Exemplo0103 - v0.0. - 10 / 03 / 2024
  Author: Luis Henrique Ferreira Costa
 
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0103 exemplo0103.c
 Windows: gcc -o exemplo0103 exemplo0103.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0103
 Windows: exemplo0103
*/

// dependencias
#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral

/**
 Method_01.
*/
void method_01 ( void )
{
    int x = 0;
    printf("\n x=%d", x);
    printf ( " & x = %p",&x ); // OBS.: O formato para endereco -> %p""

    //ler do teclado
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &x);
    getchar();

    printf("x = %i", x);
 // identificar
 printf ( "%s\n", "\nMethod_01 Programa =v0.0    " );
 // encerrar
 printf ( "\nApertar ENTER para continuar.\n" );
 getchar ( );

 
} // end method_01 ( )

/*
    Metodo 2
*/
void metodo2 (void){
    double x = 0.0; 
    printf ( "%s\n", "\nMethod_02 Programa =v0.0    " );

    printf("\nx = %f", x);
    
    printf("\nEntrar com valor real: ");
    scanf("%lf", &x);
    getchar();

    printf("x = %lf", x);

    printf("\n\nAperte enter para continuar");
    getchar();

}//end method2

/*
    Metodo 3
*/

void metodo3(void){
    char x = 'A';

    printf ( "%s\n", "\nMethod_03 Programa =v0.0    " );

    printf("\nx = %c", x);

    printf("\nEntre com um caractere: ");
    scanf("%c", &x);
    getchar();
    printf("x = %c", x);
    printf ( "\n\nApertar ENTER para continuar.\n" );
     getchar( ); // aguardar por ENTER
    
}
int main ( int argc, char* argv [ ] )
{
    // definir dado
    int opcao = 0;
    // identificar
    printf ( "%s\n", "Exemplo0103 - Programa = v0.0" );
    printf ( "%s\n", "Autor: Luis Henrique Ferreira Costa" );
    printf ( "\n" ); // mudar de linha

    // acoes
    // repetir
    do
    {
        // para mostrar opcoes
        printf ( "\n%s\n", "Opcoes:" );
        printf ( "\n%s" , "0 - Terminar" );
        printf ( "\n%s" , "1 - Method_01" );
        printf("\n2- Method_02");
        printf("\n3 - Method_3");
        // ler a opcao do teclado
        printf ( "\n%s", "Opcao = " );
        scanf ( "%d", &opcao );
        getchar( ); // para limpar a entrada de dados
        // para mostrar a opcao lida
        printf ( "\n%s%d", "Opcao = ", opcao );
        // escolher acao dependente da opcao
        switch ( opcao )
        {
            case 0: // nao fazer nada
                break;
            case 1: // executar method_01
                method_01 ( );
                break;
            case 2:
                metodo2();
                break;
            case 3:
                metodo3();
                break;
            default: // comportamento padrao
                printf ( "\nERRO: Opcao invalida.\n" );
                break;
        } 
    }
    while ( opcao != 0 );
    // encerrar
    printf ( "\n\nApertar ENTER para terminar." );
    getchar( ); // aguardar por ENTER
    return ( 0 ); // voltar ao SO (sem erros)
} // end main ( )
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.0 00. ( ___ ) identificacao de programa
0.1 01 (OK) identificacao de programa
0.2 01. ( OK ) identificacao de programa leitura e exibicao de real 
0.3 03 (OK) identificacao de programa leitura e exibicao de um caractere 
*/
