#include <stdlib.h>

/*


*/

int main(){
    double x = 0.0;
    double res = 0.0;

do{
    printf("Digite um numero postivo: \n");
    scanf("%lf", &x);

    if (x > 0 ){
        res = x * x;
        printf("A area do quad e %lf\n", res);
        
    }else{
        printf("Dado invalido\n");
    }
} while(x < 0);
}