// 999999_AED1
#include <stdio.h>

/*
  Procedimento para exibir texto e
  mudar de linha.
  @param text - referencia para texto a ser exibido
*/
void println ( char *text )
{
    printf   ( "%s\n", text );
}

/*
  Procedimento para exibir texto e
  fazer uma pausa ate' ler ENTER (='\n').
  @param text - referencia para texto a ser exibido
*/
void pause   ( char *text )
{
    printf   ( "%s\n", text );
    getchar  ( );
}

/*
  Funcao para ler valor inteiro do teclado.
  @return valor lido
  @param  text - referencia para texto a ser exibido
*/
int readint  ( char *text )
{
    int      x = 0;
    printf   ( "%s", text );
    scanf    ( "%d", &x   );   getchar ( );
    return   ( x );
}

/*
  Acao principal.
*/
int main ( void )
{
 // definir dados
    int option = 0;

 // identificar
    println ( "999999_AED1" );

 // mostrar e alterar valor inteiro
    printf  ( "%s%d\n", "option = ", option );
    option  = readint ( "Qual a opcao? " );
    printf  ( "%s%d\n", "option = ", option );
  
 // encerrar
    pause   ( "Apertar ENTER para continuar." );
    return (0);
}







