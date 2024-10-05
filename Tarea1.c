#include <stdio.h>

char* uno() {
    return "Adios Flutter Hola C";
}

int dos() {
    
    int a ;
    printf("Ingrese el primer numero :");
    scanf("%d",&a);
    
    int b ;
    printf("Ingrese el segundo numero :");
    scanf("%d",&b);
    
    int c = a + b;
    
     printf("el resultado es : %d\n", c );
    
}

int tres () {
    
    // ( °C × 9/5) + 32 =  °F

    int c ;
    printf("Ingrese la temperatura :");
    scanf("%d",&c);
    
    int f = c * 1.8 + 32 ;
    
    printf("El resultado es : %d\n", f );
}

int cuatro () {
    
    int par ;
    printf("Ingrese el numero :");
    scanf("%d",&par);
    
    if (par%2 == 0) {
        
        printf("Es Par") ; } 
        else
        {printf(" Es Inpar");}
}

int cinco () {
    
    for (int i = 0 ; i < 11 ; i++) {
        printf("-> %d\n" , i);
    }
    
}

int seis() {
    
    int factorial ;
    printf("Ingrese el numero :");
    scanf("%d",&factorial);
    
    if (factorial == 1) {
        return 1;
    }    else {
        int c = 1; 
        for (int i = 1; i <= factorial; i++) {
        c *= i;  
        }
        printf("%d\n", c) ;
    }
}

float siete () {
    
      int unoo ;
    printf("Ingrese el numero :");
    scanf("%d",&unoo);
    
      int doss ;
    printf("Ingrese el numero :");
    scanf("%d",&doss);
    
      int tress ;
    printf("Ingrese el numero :");
    scanf("%d",&tress);
    
    
    float suma = unoo + doss + tress;
    
    float promedio = suma / 3;
    
    printf("%f" ,promedio);
}

int main() {
    int terminal ;
    printf("Ingrese el ejercicio que desea probar {1...7} :");
    scanf("%d",&terminal);
    
    switch (terminal) {
        case 1:
            printf("%s\n", uno());
            break;
        case 2:
            dos();
            break;
        case 3:
            tres();
            break;
        case 4:
            cuatro();
            break;
        case 5:
            cinco();
            break;
        case 6:
            seis();
            break;
        case 7:
            siete();
            break;
        default:
            printf("Elegi una opcion del 1 al 7.\n");
            break;
    }
    
    return 0;
}


