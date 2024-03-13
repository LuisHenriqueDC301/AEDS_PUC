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
  Funcao para ler valor inteiro do teclado.
  @return valor lido
  @param  text - referencia para texto a ser exibido
*/
int readint  ( char *text )
{
    int      x = 0;
    printf   ( "%s" , text );
    scanf    ( "%d" , &x   );   getchar ( );
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
    scanf    ( "%lf", &x   );   getchar ( );
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
    scanf    ( "%d" , &x   );   getchar ( );
    return   ( x != 0 );
}

/*
  Acao principal.
*/
int main ( void )
{
 // definir dados
    int     option = 0;
    double  value  = 0.0;
    bool    test   = false;

 // identificar
    println ( "999999_AED1" );

 // mostrar e alterar valor inteiro
    printf  ( "%s%d\n", "option = ", option );
    option  = readint ( "Qual a opcao? "    );
    printf  ( "%s%d\n", "option = ", option );

 // mostrar e alterar valor real
    printf  ( "%s%lf\n", "value = ", value  );
    value   = readdouble ( "Qual o valor? " );
    printf  ( "%s%lf\n", "value = ", value  );

 // mostrar e alterar valor logico
    printf  ( "%s%d\n", "test   = ", test   );
    test    = readbool   ( "Qual o teste? " );
    printf  ( "%s%d\n", "test   = ", test   );

 // encerrar
    pause   ( "Apertar ENTER para continuar." );
    return  (0);
}







