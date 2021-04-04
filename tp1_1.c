#include <stdio.h>
#include <stdlib.h>

int main(void){
    setvbuf(stdout, NULL, _IONBF, 0);
    int a=512;
    int *p=&a;

    printf("Contenido del puntero: %d\n",*p);
    printf("Direccion de memoria almacenada en el puntero: %u\n",p);
    printf("Direccion de memoria de la variable a: %u\n",&a);
    printf("Direccion de memoria del puntero: %u\n",&p);
    printf("Tamano de la variable a: %d\n", sizeof(a));


    getchar();
    return 0;
}