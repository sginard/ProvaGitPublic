#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;

    a = 10;
    b = 20;
    c = a + b;
    printf("Suma : a = %d ; b = %d ; c = %d\n",a,b,c);
    c = a - b;
    printf("Resta : a = %d ; b = %d ; c = %d\n",a,b,c);
    c = a * b;
    printf("Multiplica : a = %d ; b = %d ; c = %d\n",a,b,c);
    c = a % b;
    printf("Modulo : a = %d ; b = %d ; c = %d\n",a,b,c);
   
    //printf("HolaMundo!\n\n");
    system("pause");
    return 0;
}