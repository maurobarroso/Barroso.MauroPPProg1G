#include <stdio.h>
#include <stdlib.h>
#define TAM 2


typedef struct {
    int id;
    char procesador[20];
    char marca[20];
    float precio;
}eNotebook;

int realizarDescuento(int precio);

void ordenarPorNombre(eNotebook list[]);

int main()
{
    int valor;

    eNotebook notebooks[TAM] = {
        {0, "octaCore","Intel", 1400},
        {1, "dualCore","Intel", 1300},
        {2, "singleCore","Intel", 1100}
    };

    /*1)¨Descuentos */

    printf("Ingrese valor: ");
    scanf("%d", &valor);
    printf("%d", realizarDescuento(valor));

     /*3)¨Estructura ordenada*/

     ordenarPorNombre(notebooks);




    return 0;
}


void ordenarPorNombre(eNotebook list[])
{
    int i,j;
    eNotebook auxiliar;

    for(i=0; i < TAM - 1; i++)
    {
        if(list[i].estado == -1)
        {
            continue;
        }
            for(j=i+1; j < TAM; j++)
            {
                if(list[i].precio > list[j].precio)
                {
                    auxiliar = list[j];
                    list[j] = list[i];
                    list[i] = auxiliar;
                }
            }
    }
}


int realizarDescuento(int precio){
    int descuento;

    descuento= precio - (precio * 5 /100);
    return descuento;
}
