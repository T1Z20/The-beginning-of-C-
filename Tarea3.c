#include <stdio.h>
#include <stdlib.h>
#include <string.h>










int uno(int *a , int *b){

int temp = *a;
    *a = *b;
    *b = temp;
};

int dos(int lista[], int largo) {
    int suma = 0;

    for (int pos = 0; pos < largo; pos++) {
        int Numeroac = lista[pos];
        suma += Numeroac;  
    }

    return suma;
}


int minmax(int lista[], int largo) {
    int max = 0;
    int minimo = 0;

    
    for (int pos = 0; pos < largo; pos++) {

        if (pos == 0) {

            max = lista[pos];
            minimo = lista[pos];
        }

        if (lista[pos] > max)
        {
          max = lista[pos];
        }
        if (lista[pos] < minimo)
        {
          minimo = lista[pos];
        }

        


    }

return minimo , max;

}




int main() {


int terminal;
    printf("Ingrese el ejercicio{1...7}: ");
    scanf("%d", &terminal);
    
    switch (terminal) {

        case 1 : {// 1. Escribe un programa que pida al usuario dos números enteros. Luego, usa una función para intercambiar sus valores usando 
//       punteros.



                int numero1;
                printf("Ingrese el numero 1 ");
                scanf("%d", &numero1);
                int numero2;
                printf("Ingrese el numero 2 ");
                scanf("%d", &numero2);

                uno(&numero1,&numero2);

                printf("Ahora el numero uno es %d  , y el numero dos es %d " , numero1 , numero2);

            break;
        }
        case 2 : {//2. Escribe un programa que pida al usuario el tamaño de un array y sus elementos. Luego, usa una función para sumar todos los elementos del array y mostrar el resultado.

            int largo;
            printf("Ingrese el largo de la lista: \n");
            scanf("%d", &largo);

            int* listas = (int*)malloc(largo * sizeof(int));

            for (int i = 0; i < largo; i++) {
                int numero;
                printf("Ingrese el numero (%d) que desea agregar a la lista:  \n", i);
                scanf("%d", &numero);
                listas[i] = numero;
            }

            int resultado = dos(listas, largo);
            printf("La suma de los elementos es: %d ", resultado);


            break;
        }

        case 3 : {// 3. Escribe un programa que permita al usuario ingresar los elementos de un array y use una función para encontrar el valor máximo y mínimo de dicho array. 

                int largo;
            printf("Ingrese el largo de la lista: \n");
            scanf("%d", &largo);

            int* listas = (int*)malloc(largo * sizeof(int));

            for (int i = 0; i < largo; i++) {
                int numero;
                printf("Ingrese el numero (%d) que desea agregar a la lista:  \n", i);
                scanf("%d", &numero);
                listas[i] = numero;
            }
             int minimo , maximo = minmax(listas, largo);
            printf("El valor minimo es %d y el valor maximo es %d", minimo , maximo );

                //             Ingrese el largo de la lista: 
                // 3
                // Ingrese el numero (0) que desea agregar a la lista:  
                // 3
                // Ingrese el numero (1) que desea agregar a la lista:  
                // 5
                // Ingrese el numero (2) que desea agregar a la lista:  
                // 1
                // El valor minimo es 50 y el valor maximo es 5
                // PS C:\Users\Tiza\Desktop\Work\Proyectos\C> 



            break;
        } case 4 : { // 4. Implementa el algoritmo de ordenamiento de burbuja para ordenar un array de números enteros en orden ascendente. El programa debe pedir al usuario el tamaño del array y los valores a ordenar.

            int lar;
            printf("Ingrese el largo de la lista: \n");
            scanf("%d", &lar);

            int* array = (int*)malloc(lar * sizeof(int));

            for (int i = 0; i < lar; i++) {
                int numero;
                printf("Ingrese el numero (%d) que desea agregar a la lista:  \n", i);
                scanf("%d", &numero);
                array[i] = numero;
            }

            for (int i = 0; i < lar -1 ; i++){
                 for (int j = 0; j < lar - 1 - i; j++){
                    if (array[j] > array[j + 1] ) {
                        int temp = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = temp;
                                    
                                }
                            }
                            
            }

             printf("Tu array ordenado se ve asi:  \n \n");

             for ( int i = 0; i < lar; i++)
             {
                 printf("%d , ", array[i]);
             }
            





            break;
        }
        






    }





    return 0 ;

}