/*
 863566 - v0.0. - 09 / 03 / 2024
 Author: Luis Henrique Ferreira Costa

 
 
*/
// dependencias
#include <stdio.h> // para as entradas e saidas
/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main ( int argc, char* argv [ ] )
{
// definir dados / resultados
int num;
int res;
// identificar
 printf ( "%s\n", "Exemplo0001 - Programa = v0.0" );
 printf ( "%s\n", "Autor: Luis Henrique Ferreira Costa 863566" );
 printf ( "\n" ); // mudar de linha
// acoes
 printf("%s","Digite um numero: ");
 scanf ("%d", &num);
 res = num * 2;
 printf("O dobro de %d e %d", num, res);
 
// encerrar
 printf ( "\n\nApertar ENTER para terminar." );
 getchar( ); // aguardar por ENTER
 return ( 0 ); // voltar ao SO (sem erros)
} // end main ()
/*

---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 5
b.) -5
c.) 123456789
---------------------------------------------- historico
Versao Data Modificacao
0.1 09/03 esboco
0.2 09/03 mudanca de versao
---------------------------------------------- testes
Versao Teste
0.0 01. ( OK ) identificacao de programa
0.1 01. (OK) identificacao de programa
*/