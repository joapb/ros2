#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*


void encontraExtremos(int *vetor, int tamanho, int *menor, int *maior){
    *menor=*vetor;
    *maior=*vetor;
    for (int i=0; i<tamanho; i++){
        if (*(vetor+i)<*menor){*menor=*(vetor+i);}
        if (*(vetor+i)>*maior){*maior=*(vetor+i);}
    }
    return;
}

int main (void){
    int tamanho=5;
    int vetor[]={15,3,9,21,7};
    int maior, menor;
    encontraExtremos(vetor,tamanho,&menor,&maior);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("\n");
}


*/


int fib(n){
    if (n==0){return 0;}
    if (n==1){return 1;}
    return fib(n-1)+fib(n-2);    
    }
int main(void){
    int n;
    printf("digite o número de termos: ");
    scanf("%d",&n);
    printf("\n%d\n",fib(n));
    return 0;
}