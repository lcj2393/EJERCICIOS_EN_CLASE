#include <iostream>

void menu();
void realizar_examen();
bool validar();
void ver_resultados();
void repetir_examen();
int main()
{
    char nombre[30];
    bool estado=false;

    printf("Digite su Nombre\n");
    scanf("%s",nombre);

    char *pnombre=nombre;
    bool *pestado=estado;

    menu(&pnombre,&pestado);
    return 0;
}
