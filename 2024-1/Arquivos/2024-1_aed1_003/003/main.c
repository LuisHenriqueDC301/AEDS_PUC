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
  Acao principal.
*/
int main ( void )
{
 // identificar
    println ( "999999_AED1" );
 // encerrar
    pause   ( "Apertar ENTER para continuar." );
    return  (0);
}
