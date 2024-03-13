/*
 Exemplo0107 - v0.0. - 10 / 03 / 2024
  Author: Luis Henrique Ferreira Costa
 
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0107 exemplo0107.c
 Windows: gcc -o exemplo0107 exemplo0107.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0107
 Windows: exemplo0107
*/

// dependencias
#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h>
#include <string.h>

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
/*
    Metodo 4
*/
void metodo4(void){
    bool x = false;

    int y = 0;
    printf ( "%s\n", "\nMethod_04 Programa =v0.0    " );

    printf("\n x = %d\n", x);
    
    printf("Entrar com valor logico: ");
    scanf("%d", &y);
    getchar();
    
    x = (y != 0);

    printf("x = %d", x);
    /*
    Mesma coisa que:
    if (y != 0) {
        x = 1;
    } else {
        x = 0;
    }
    */
}
/*
    Metodo 5
*/
void metodo5(void){
    char x [80] = "abc";
    char *px = &x[0];

    // identificar
    printf ( "\n%s\n", "Method_05 - Programa - v0.0" );
    // mostrar valor inicial
    printf ( "\n%s%s\n", "x = ", x );

    printf("entrar com cadeia de caracteres: ");
    scanf("%s", x);

    printf ( "%s%s\n", "x = ", x );
    // ler do teclado (forma alternativa para acesso via endereco)
    printf ( "Entrar com outra cadeia de caracteres: " );
    scanf ( "%s", px );
    getchar ( ); // OBS.: Limpar a entrada de dados
    // mostrar valor lido (forma alternativa para acesso via endereco)
    printf ( "%s%s\n", "x = ", px );
    getchar();
    printf("x = %s", x);
    // encerrar
    printf ( "\n\nApertar ENTER para continuar.\n" );
    getchar( ); // aguardar por ENTER

}
/*
    Metodo 6
*/
void metodo6 ( void )
{
// definir dados
 int x = 0; // definir variavel com valor inicial
 int y = 0; // definir variavel com valor inicial
 int z = 0; // definir variavel com valor inicial
 int *py = &y; // definir acesso a y via endereco
// identificar
 printf ( "\n%s\n", "Method_06 - Programa - v0.0" );
// mostrar valores iniciais
 printf ( "%s%d\n", "x = ", x );
 printf ( "%s%i\n" , "y = ", y );
// OBS.: O formato para int -> %d (ou %i)
// ler do teclado
 printf ( "Entrar com um valor inteiro: " );
 scanf ( "%d", &x );
// OBS.: Necessario indicar o endereco -> &
 getchar ( ); // OBS.: Limpar a entrada de dados
 printf ( "Entrar com outro valor inteiro: " );
 scanf ( "%i", py );
// OBS.: Não e' necessario indicar o endereco -> &
 getchar ( ); // OBS.: Limpar a entrada de dados
// operar valores
 z = x * y; // guardar em z o produto de x por y
// mostrar valor resultante
 printf ( "%s(%i)*(%i) = (%d)\n", "z = ", x, y, z );
// encerrar
 printf ( "\n\nApertar ENTER para continuar.\n" );
 getchar( ); // aguardar por ENTER
}
/*
    Metodo 7
*/

void metodo7 ( void )
{
// definir dados
 char x [80] = "abc"; // definir variavel com tamanho e valor inicial
 char y [80] = "def"; // definir variavel com tamanho e valor inicial
 char z [80]; // definir variavel com tamanho inicial
 strcpy ( z, "" ); // e copiar para (z) a representacao de vazio
// identificar
 printf ( "\n%s\n", "Method_07 - Programa - v0.0" );
// mostrar valores iniciais e comprimentos das cadeias
 printf ( "%s%s (%d)\n", "x = ", x, strlen( x) );
 printf ( "%s%s (%d)\n", "y = ", y, strlen( y) );
// OBS.: O formato para int -> %d (ou %i)
// ler do teclado
 printf ( "Entrar com caracteres: " );
 scanf ( "%s", x );
// OBS.: Nao indicar o endereco -> &
 getchar ( ); // OBS.: Limpar a entrada de dados
 printf ( "Entrar com outros caracteres: " );
 scanf ( "%s", y );
// OBS.: Nao indicar o endereco -> &
 getchar ( ); // OBS.: Limpar a entrada de dados
// operar valores
 strcpy ( z, x ); // copiar (x) para (z)
 strcat ( z, y ); // concatenar (juntar) (y) a (z)
// OBS.: Forma mais eficiente
// mostrar valor resultante
 printf ( "%s[%s]*[%s] = [%s]\n", "z = ", x, y, z );
// operar valores (forma alternativa)
 strcpy ( z, strcat ( strdup(x), y ) );
// copiar para (z)
// o resultado de concatenar
// a copia de (x) com (y)
// OBS.: Se nao duplicar, o valor (x) sera' alterado.
// mostrar valor resultante
 printf ( "%s[%s]*[%s] = [%s]\n", "z = ", x, y, z );
// encerrar
 printf ( "\n\nApertar ENTER para continuar.\n" );
 getchar( ); // aguardar por ENTER
} 
int main ( int argc, char* argv [ ] )
{
    // definir dado
    int opcao = 0;
    // identificar
    printf ( "%s\n", "Exemplo0107 - Programa = v0.0" );
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
        printf("\n2 - Method_02");
        printf("\n3 - Method_03");
        printf("\n4 - Method_04");
        printf("\n5 - Method_05");
        printf("\n6 - Method_06");
        printf("\n7 - Method_07");
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
            case 4:
                metodo4();
                break;
            case 5:
                metodo5();
                break;
            case 6:
                metodo6();
                break;
            case 7:
                metodo7();
                break;
            default: // comportamento padrao
                printf ( "\nERRO: Opcao invalida.\n" );
                getchar();
                break;
        }  // end switch
        
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
0.2 02. ( OK ) identificacao de programa leitura e exibicao de real
0.3 03. ( OK ) identificacao de programa leitura e exibicao de um caractere 
0.4 04. ( OK )identificacao de programa leitura e exibicao de um valor logico a partir de um dado booleano
0.5 05. ( OK ) ponteiro, string e caractere
0.6 0.6 ( OK ) ponteiro e numeros inteiros
0.7 0.7 ( OK)
0.8 0.8 ( OK)
*/