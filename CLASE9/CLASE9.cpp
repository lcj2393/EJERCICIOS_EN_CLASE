#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void pedir_datos();
void mostrar_vector();


int longitud,*p_vector;

int main(){

pedir_datos();
mostrar_vector();
free(p_vector);

return 0;
}

void pedir_datos(){

printf("Ingrese Longitud\n");
scanf("%d",&longitud);

p_vector=(int *)malloc(sizeof(int)*longitud);

for(int i=0;i<longitud;i++){

    printf("Ingrese Dato\n");
    scanf("%d",&(*(p_vector+i)));
}
}

void
