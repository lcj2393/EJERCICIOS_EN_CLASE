#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void llenar_arreglo(int *,int );
void imprimir_arreglo(int *,int );

using namespace std;
int main()
{
    int arreglo[100],*parreglo=arreglo,longitud;
    printf("De cuantas pocisiones desea el arreglo? (0 a 100) \n");
    scanf("%d",&longitud);

    llenar_arreglo(parreglo,longitud);
    imprimir_arreglo(parreglo,longitud);
    return 0;
}

void llenar_arreglo(int*p,int l){

    for(int i=0;i<l;i++)
    {
        printf("Ingrese valor %d: \n",i+1);
        scanf("%d",&(*(p+i)));
    }
}

void imprimir_arreglo(int *p,int l){
int aux=0,*direccion;

for (int i=0;i<l;i++)
{
    printf("%d,%p\n",*(p+i),(p+i));
    if(*(p+i)>aux){
        aux=*(p+i);
        direccion=(p+i);
    }
}
printf("El mayor es %d y direccion de auxiliar es %p, y direccion %p\n",aux,&aux,direccion);

}
