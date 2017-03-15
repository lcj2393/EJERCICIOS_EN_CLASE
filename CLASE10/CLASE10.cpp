#include <stdlib.h>
#include <stdio.h>
#include <iostream>
//MANEJO DE PILAS

using namespace std;

struct Nodo{
    int dato;
    Nodo *Siguiente;
};

void insertar (Nodo *&, int);
void quitar (Nodo *&, int &);

int main(){
    int n;
    char salir;
    Nodo *pila =NULL;

    do{

    printf("Ingrese un numero: \n");
    scanf("%d",&n);
    insertar(pila, n);
    printf("Presiones (S) para insertar mas datos");
    cin>>salir;
    cin.ignore(256,'\n');
    }while(salir=='S' || salir=='s');
    while(pila!=NULL){
        quitar(pila,n);
        if(pila!=NULL){
            printf("%d -> ",n);
        }else{
            printf("%d -> FIN",n);
        }

    }
    return 0;
}

void insertar (Nodo *&pila, int n){

    Nodo *nuevo_nodo=(Nodo*)malloc(sizeof(Nodo));
    nuevo_nodo->dato=n;
    nuevo_nodo->Siguiente=pila;
    pila= nuevo_nodo;

    printf("\nDato %d, insertado correctamente\n",n);
}

void quitar (Nodo *&pila, int &n){
    Nodo *aux=pila;
    n=aux->dato;
    pila=aux->Siguiente;
    free(aux);
}
