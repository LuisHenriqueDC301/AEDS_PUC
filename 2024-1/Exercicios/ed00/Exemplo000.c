#include <stdio.h>
#include <stdlib.h>
void metodo1(){

 printf ( "EXEMPLO101 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 
}

void metodo2(){
    system ( "cls" ); // (Windows) para limpar a tela
    // system ( "clear" ); // (Linux ) para limpar a tela
    // (dependente do sistema operacional)
    printf ( "EXEMPLO102 - PRIMEIRO EXEMPLO EM C\n" );
    system ( "pause" ); // (Windows) para esperar
    // getchar( ); // para esperar
    // (dependente do sistema operacional)
    
}

void clrscr ( ) { system ( "cls" ); } // para Windows
// void clrscr ( ) { system ( "clear" ); } // para Linux
void metodo3(){   
    clrscr ( ); // funcao para limpar a tela
    printf ( "EXEMPLO103 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\n" ); // para mudar de linha
    printf ( "MATRICULA: 863566 ALUNO : Luis Henrique Ferreira Costa" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); // para esperar

}
void metodo4(){
 printf ( "EXEMPLO104 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\n" ); // para mudar de linha (="\n")
 printf ( "MATRICULA: 863566 ALUNO : Luis Henrique Ferreira Costa" );
 printf ( "\n" ); // para mudar de linha
 printf ( "PRESSIONAR <Enter> PARA TERMINAR. " );
 getchar( ); // para esperar
}
void metodo5(){
    printf ( "EXEMPLO105 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\nMATRICULA: 863566 ALUNO : Luis Henrique Ferreira Costa" );
    printf ( "\nEXEMPLOS DE VALORES : " );
    printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
    printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
    printf ( "\nREAL : %f", 3.1415 ); // valor com parte fracionaria
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR. " );
    getchar( ); // para esperar;
}

void metodo6(){
    const float PI = 3.14;
 printf ( "EXEMPLO106 - PRIMEIRO EXEMPLO EM C " );
 printf ( "\nMATRICULA: 863566 ALUNO : Luis Henrique Ferreira Costa" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
 printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
 printf ( "\nREAL : %f", PI ); // emprego de macro
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );
}
void metodo7(){
    const float PI = 3.14; // com nome e tipo (melhor)
 printf ( "EXEMPLO107 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: 863566 ALUNO : Luis Henrique Ferreira Costa");
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
 printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
 printf ( "\nREAL : %f" , PI ); // constante real
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );

}
void metodo8(){
    // definicao de constante
 const float PI = 3.14; // com nome e tipo (melhor)
// definicao de variavel real
 float X = 10.01; // com atribuicao de valor inicial
 printf ( "EXEMPLO108 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: ______ ALUNO : __________________" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
 printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
 printf ( "\nREAL : %f", PI ); // constante real
 printf ( "\nREAL : %f", X ); // variavel real
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
}
void metodo9(){
    // definicao de constante
 const float PI = 3.14; // com nome e tipo (melhor)
// definicao de variavel real
 float X = 10.01;
// definicao de variavel inteira
 int I = 10;
 printf ( "EXEMPLO109 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: ______ ALUNO : __________________" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nINTEIRO : %i" , I );
 printf ( "\nREAL : %f" , X );
 printf ( "\nREAL : %f" , PI );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
}
void metodo10(){
    
// definicao de constante
 const double PI = 3.14; // com nome e tipo (melhor)
// definicao de variavel real
 float X = 10.01;
// definicao de variavel inteira
 int I = 10;
// definicao de variavel caractere
 char N = '\n'; // mudar de linha
 printf ( "EXEMPLO110 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: ______ ALUNO : __________________" );
 printf ( "%c%s", N, "EXEMPLOS DE VALORES : " );
 printf ( "%c%s%i" , N, "INTEIRO : " , I );
 printf ( "%c%s%f" , N, "REAL : " , X );
 printf ( "%c%s%lf", N, "REAL : " , PI );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar

}
int main()  {
    
    int opcao;
    do{
    printf("\nDigite um metodo de 1 a 50\nDigite 0 para sair:\n");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 0:
        printf("Fim");
        break;
    case 1:
       metodo1();
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
    case 8:
       metodo8();
        break;
    case 9:
       metodo9();
        break;
    case 10:
       metodo10();
        break;                                  
    default:
        printf("Opcao invalida");
        break;
    } //end swith
    }//end do
    while (opcao != 0);

    return 0;
}    
