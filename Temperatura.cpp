#include<stdio.h>
#include<stdlib.h>

int f,c;

int main()

{
    printf("Ingrese su termperatura: \n ");
    scanf("%d" , & c);
    fflush(stdin);
    
    f=(c*1.8)+32;
    
    printf("el valor en F° es de : %d",f);
    getchar();
    return 0;
    }
