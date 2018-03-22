#include <stdio.h>
#include <stdlib.h>

#define CANT_NUMEROS 5

int main()
{
    int suma=0;
    int numero;
    float resultado;
    int i;
    int flag = 0;
    int numeroMinimo;
    int numeroMaximo;
    char continuar = 's';

    do{
        for(i=0; i<CANT_NUMEROS; i++){

            printf("Ingrese el numero %d:", i+1);
            scanf("%d", &numero);

            while(numero<=0){

                printf("Error, el numero ingresado debe ser mayor a 0. Reingrese numero %d: ", i+1);
                scanf("%d", &numero);
            }

            suma=suma+numero;

            if(numero>numeroMaximo || flag==0){

                numeroMaximo=numero;
            }
            if(numero<numeroMinimo || flag==0){

                numeroMinimo=numero;
            }
            flag=1;

        }

        resultado= (float)suma/CANT_NUMEROS; //(float): casteo, hace creer que es un float aunque no lo sea
        printf("\nEl promedio es: %.2f \n", resultado);//%.2f: imprime 2 decimales
        printf("\nEl numero minimo es: %d \n", numeroMinimo);
        printf("\nEl numero maximo es: %d \n", numeroMaximo);

        printf("\nDesea continuar? (s/n) ");
        fflush(stdin);
        scanf("%c", &continuar);

    }while(continuar == 's');

    return 0;
}
