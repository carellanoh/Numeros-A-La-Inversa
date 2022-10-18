#include <stdio.h>

int main()
{
    int arreglo[9];
    printf("Programa que pida 10 numero enteros y los muestre a su inversa \n\n");
    for(int i = 0; i < 10; i++){
        printf("Proporcioname el numero %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    printf("\nArreglo impreso a la inversa \n\n");
    for(int j = 9; j >= 0; j--){
        printf("Numero %d: %d \n", j + 1, arreglo[j]);
    }
    return 0;
}
