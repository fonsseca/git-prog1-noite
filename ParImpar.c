#include <stdio.h>

main(){
    int num;
    
    printf("\nEntre com um numero:");
    scanf("%d",&num);
    
    if(num % 2 == 0)
    {
        printf("PAR");
    }
        else
    {
        printf("IMPAR");
    }
    
  

    return 0;
}