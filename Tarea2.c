#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int uno() {
    int Lista[5];
   
    for (int i = 0; i < 5; i++) {
        int numero;
        printf("Ingrese el numero (%d) que desea agregar a la lista: ", i);
        scanf("%d", &numero);
        Lista[i] = numero;
    }

    for (int r = 4; r > -1; r--) {
        printf("%d ", Lista[r]);
    }

    printf("\n");
    return 0;
}

void dos(char nombre[]) {
    printf("Bienvenido %s \n \n", nombre);
    printf("Su nombre tiene un largo de %zu\n", strlen(nombre));
}

int tres(int lista[], int largo) {
    int suma = 0;

    for (int pos = 0; pos < largo; pos++) {
        int Numeroac = lista[pos];
        suma += Numeroac;  
    }

    return suma;
}

int cuatro( int *a  ) {

        *a = 200 ;

}

int cinco(int x) {

    if (x % 2 == 0) {

        return 1 ;}
    else { 
        return 0 ;}
}

struct Libro
            {
                char titulo[50] ;
                char autor[50];
                int  anio;
            };

// void seis(struct Libro libros[]) {

//     for (int i = 0; i < 1; i++) {
//         printf("Libro %d:\n", i + 1);
//         printf("Título: %s\n", libros[i].titulo);
//         printf("Autor: %s\n", libros[i].autor);
//         printf("Año: %d\n", libros[i].anio);
//         printf("\n");
//     }

// }


int main() {

    int terminal;
    printf("Ingrese el ejercicio{1...7}: ");
    scanf("%d", &terminal);
    
    switch (terminal) {

        case 1 : // 1. Escribir un programa que almacene 5 números enteros en un array y luego imprima los números en orden inverso !!
            uno();
            break;

        case 2 : { // 2. Diseñar un programa que lea el nombre de un usuario y lo salude por su nombre. Luego, muestra cuántos caracteres tiene el nombre utilizando la función strlen().!!
            char nombre[100];
            printf("Ingrese su nombre: ");
            scanf("%99s", nombre);
            dos(nombre);
            break;
        }
        case 3 : { // 3. Escribir una función que reciba un array de enteros y su tamaño, y devuelva la suma de todos los elementos del array.!! 
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

            int resultado = tres(listas, largo);
            printf("La suma de los elementos es: %d : ", resultado);
            break;
            }
        case 4 :{ // 4. Hacer un programa que declare una variable entera y un puntero a esa variable. Utiliza el puntero para modificar el valor de la variable.

            int variable;
            printf("Ingrese su numero \n");
            scanf("%d", &variable);
            cuatro (&variable );
            printf("Su numero luego de modificar su puntero es %d :"  , variable);

            break;
        }
        case 5 : { // 5. Escribir una función que reciba un número entero y devuelva 1 si es par y 0 si es impar.

            int paroimpar;
            printf("Ingrese su numero \n");
            scanf("%d", &paroimpar);

            int resultado = cinco(paroimpar);

            printf("%d" , resultado);

            break;
        }
    //     case 6 : { // 6. Definir una estructura llamada "Libro" con los campos "titulo", "autor" y "año". Escribe un programa que pida al usuario los datos de tres libros y luego los muestre por pantalla.

    //         struct Libro libros[1];
            
             
    //     printf("Ingrese los datos del libro ");

    //     printf("Título: ");
    //     scanf("%s[^\n]", libros[1].titulo);  
       
    //     printf("Autor: ");
    //     scanf("%s[^\n]", libros[1].autor);  

    //     printf("Año de publicación: ");
    //     scanf("%d[^\n]", &libros[1].anio);
        
    //     printf("\n");  // Espacio para separar la entrada de libros
    // }

    // seis(Libros);

    //         break;
    //     }
    case 7: { // 7. Escribir un programa que busque un número dado por el usuario dentro de un array de 10 elementos. Si lo encuentra, debe imprimir la posición del número en el array.

        int buscar; //[10 , 20 ,30 ,40 ,50 , 70 , 8 ,1 ,4  , 5]
            printf("Ingrese su numero \n");
            scanf("%d", &buscar);

             int lista[] = {10, 20, 30, 40, 50, 70, 8, 1, 4, 5};

                for (int i = 0; i < 10; i++) {
                 if (lista[i] == buscar) {
                    int Lugar = i + 1;
                    printf("se encuentra en el lugar: %d o en el index %d", Lugar , i);
        }
        }
                


        break;
    }
    case 8 : {
                            //  EJEMPLO DE W3SCHOOL
            // char myStr1[] = "ABCD";
            // char myStr2[] = "ABCE";
            // int cmp = strcmp(myStr1, myStr2);
            // if (cmp > 0) {
            // printf("%s is greater than %s\n", myStr1, myStr2);
            // } else if (cmp < 0) {
            // printf("%s is greater than %s\n", myStr2, myStr1);
            // } else {
            // printf("%s is equal to %s\n", myStr1, myStr2);}

            char cadena1[100];
            printf("Ingrese su primera cadena: ");
            scanf("%99s", cadena1);


            char cadena2[100];
            printf("Ingrese su segunda cadena: ");
            scanf("%99s", cadena2);

            if (strcmp(cadena1, cadena2) == 0) {
                printf(" son iguales.");
            } else {
                printf("son diferentes.");
            }



             break;
}


        default:
            printf("Elija una opción del 1 al 7.\n");
            break;
    }


    return 0;
}