/*
 Exemplo0003 863566 - v0.0. - 09 / 03 / 2024
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
 int opcao = 0;
 int res = 0;
// identificar
 printf ( "%s\n", "Exemplo0003 - Programa = v0.0" );
 printf ( "%s\n", "Autor: Luis Henrique Ferreira Costa 863566" );
 printf ( "\n" ); // mudar de linha
// acoes
printf("\n Opcoes:");
printf("\n 0 - Terminar");

// ler a opcao do teclado
 printf ( "\n%s", "Opcao = " );
 scanf ( "%d", &opcao );
 getchar( ); // para limpar a entrada de dados
// para mostrar a opcao lida
 printf ( "\n%s%d", "Opcao = ", opcao );

  switch ( opcao )
 {
 case 0: // nao fazer nada
 break;
 default: // comportamento padrao
 printf ( "\nERRO: Opcao invalida.\n" );
 break;
 } // end switch

// encerrar
 printf ( "\n\nApertar ENTER para terminar." );
 getchar( ); // aguardar por ENTER
 return ( 0 ); // voltar ao SO (sem erros)
}// end main ()
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
0.0 00. ( OK ) identificacao de programa
0.1 01. ( OK ) identificacao de programa
0.2 02. ( OK ) identificacao de programa leitura e exibicao de inteiro
*/