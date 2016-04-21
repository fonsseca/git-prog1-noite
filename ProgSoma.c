#include <stdio.h>

main(){
    int num1,num2;
    int Soma,Subtracao,Multiplicacao;
    float Divisao;
    
    printf("\nEntre com um numero inteiro:");
    scanf("%d",&num1);
    printf("\nEntre com outro numero inteiro:");
    scanf("%d",&num2);
    
    Soma=num1+num2;
    Subtracao=num1-num2;
    Multiplicacao=num1*num2;
    Divisao=num1/num2;
    
    printf("\nSoma= %d", Soma);
    printf("\nSubtracao= %d", Subtracao);
    printf("\nMultiplicacao= %d", Multiplicacao);
    printf("\nDivisao= %f", Divisao);

    return 0;
}
