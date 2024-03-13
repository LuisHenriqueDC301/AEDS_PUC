// 999999_AED1
#include <stdio.h>

/*
  Procedimento para exibir texto e
  mudar de linha.
  @param text - referencia para texto a ser exibido
*/
void println ( char *text )
{
    printf ( "%s\n", text );
}

/*
  Acao principal.
*/
int main ( void )
{
 // identificar
    println ( "999999_AED1" );
 // encerrar
    println ( "Apertar ENTER para continuar." );
    getchar ( );
    return  (0);
}
