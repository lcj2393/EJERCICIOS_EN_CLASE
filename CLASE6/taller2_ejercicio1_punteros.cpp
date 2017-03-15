#include <stdio.h>
#include <iostream>

void esPrimo(int *);
void pedirnumero();

    int num;
    int *pmun=&num;
int main()
{
    pedirnumero();
    esPrimo(pnum);
    return 0;

}
void esPrimo(int *n)
{
    bool esprimito;
    int contador=0;
    for(int i=1;i<=*n;i++)
    {
        if(*n%i==0)
        {
            contador+=1;
        }
    }
    if (contador==2)
    {   printf("es primo\n");   }else{  printf("es primo\n");   }
}
void pedirnumero()
{
    printf("Ingrese el numero\n");
    scanf("%d",&num);

}
