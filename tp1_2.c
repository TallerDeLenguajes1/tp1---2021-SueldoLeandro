#include <stdio.h>
#include <stdlib.h>

// 3-a
int cuadrado(int x){
    return (x=x*x);
}

//3-b
void cuadradoVoid(int x){
    int aux=0;
    aux=x;
    printf("El cuadrado de %d es %d\n\n",aux,x=x*x);
    return;
}

//3-c
void contenidoVariable(int x){
    printf("El contenido de la variable es %d\nLa direccion de memoria de la variable es %u\n\n",x,&x);
    return;
}


//3-d
void Invertir(int a,int b){
    int aux=0;
    aux=a;
    a=b;
    b=aux;

    printf("Ahora A es %d y B es %d\n\n",a,b);

    return;
}

//3-e
void Orden(int a,int b){
    if (a<b)
    {
        printf("El menor es %d y el mayor es %d\n\n",a,b);
    }else{
        printf("El menor es %d y el mayor es %d\n\n",b,a);
    }
    
    return;
}
// -------------MAIN-----------------------
int main(void){
    setvbuf(stdout, NULL, _IONBF, 0);
    int x=0,a=0,dontclose;

    printf("Ingrese un numero entero:\n");
    scanf("%d",&a);
    printf("El cuadrado de %d es: %d\n\n",a,x=cuadrado(a));

    printf("Ingrese otro numero entero:\n");
    scanf("%d",&a);
    cuadradoVoid(a);


    printf("Ingrese otro numero entero:\n");
    scanf("%d",&a);
    contenidoVariable(a);

    printf("Ingrese dos numeros a invertir:\n");
    scanf("%d%d",&a,&x);
    Invertir(a,x);
    

    printf("Ingrese dos numeros enteros distintos:\n");
    scanf("%d%d",&a,&x);
    Orden(a,x);


    scanf("%d",&dontclose);
    return 0;
}

