#include <stdlib.h>
#include <stdio.h>

int main(){

    int a, b;

    printf("Digite um número");
    scanf("%i", &a);

    b = a % 2;

    if(b == 0){
        printf("%i é par", a);
    }

    else{
        printf("%i é impar", a);
    }

return 0;
}