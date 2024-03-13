// 999999_AED1
#include <stdio.h>
#include <stdbool.h>

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
  Procedimento para limpar a entrada de dados
  ate' ler ENTER (='\n').
*/
void flush   ( void )
{
    char     x = '0';
    do       // limpar a entrada
    {        x = getchar ( );   }
    while (  x != '\n'  );
}

/*
  Funcao para ler valor inteiro do teclado.
  @return valor lido
  @param  text - referencia para texto a ser exibido
*/
int readint  ( char *text )
{
    int      x = 0;
    printf   ( "%s" , text );
    scanf    ( "%d" , &x   );   
    flush    ( );
    return   ( x );
}

/*
  Funcao para ler valor real do teclado.
  @return valor lido
  @param  text - referencia para texto a ser exibido
*/
double readdouble ( char *text )
{
    double   x = 0.0;
    printf   ( "%s" , text );
    scanf    ( "%lf", &x   );   
    flush    ( );
    return   ( x );
}

/*
  Funcao para ler valor logico do teclado.
  @return comparacao entre valor lido e zero
  @param  text - referencia para texto a ser exibido
*/
bool   readbool   ( char *text )
{
    int      x = 0;
    printf   ( "%s" , text );
    scanf    ( "%d" , &x   );   
    flush    ( );
    return   ( x != 0 );
}

/*
  Funcao para ler um caractere do teclado.
  @return simbolo lido
  @param  text - referencia para texto a ser exibido
*/
char   readchar   ( char *text )
{
    char    x = '0';
    char    y = '0';
    printf  ( "%s" , text );
    scanf   ( "%c" , &x   );
    flush   ( );
    return  ( x );
}
