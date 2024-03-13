// 999999_AED1
#include "io.h"

/*
  Acao principal.
*/
int main ( void )
{
 // definir dados
    int     option = 0;
    double  value  = 0.0;
    bool    test   = false;
    char    letter = '0';

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

 // mostrar e alterar caractere
    printf  ( "%s%c\n", "letter = ", letter );
    letter  = readchar   ( "Qual a letra? " );
    printf  ( "%s%c\n", "letter = ", letter );

 // encerrar
    pause   ( "Apertar ENTER para continuar." );
    return  (0);
}

/*
  Testes
  a.) inteiro  : 12
      real     : 3.4
      logico   : 5
      caractere: Q

  Observar
  b.) inteiro  : 1 2
      real     : 3..4
      logico   : -5
      caractere: QUAL

  c.) inteiro  : 1A2
      real     : 3.A4
      logico   : 0
      caractere: a
*/







