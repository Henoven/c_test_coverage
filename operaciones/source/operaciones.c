#include <stdio.h>
/*
    
– Código con las siguientes opciones:

a) Introducir un valor entero impar comprendido entre 1 y 19 (Validar que sea impar antes de continuar)

b) Calcular la serie numérica 1 + 3 + 5 + ··· + n (Número introducido por el usuario)

c) Calcular 1 * 3 * 5 * ··· * n (Número introducido por el usuario)

d) Salir del programa.

*/

int serie_numerica()
{
    // Creacion de variables a utilizar
    int numero=0;
    char opcion;
    int sistema=0;

    // Solicitar opcion hasta que introduzcan salir
    do {
        printf("\n a) - Introducir No.");
        printf("\n b) - Calcular Serie Numerica.");
        printf("\n c) - Calcular Multiplicacion");
        printf("\n d) - Salir");
        printf("\n ================================ Opcion: ");
        scanf(" %c",&opcion);
        // llamada a las funciones segun la opcion elegida
        switch(opcion) {
            case 'a':
                numero = solicitar_Numero();
                break;
            case 'b':
                if(numero>0) {
                    sistema = serie_Numerica(numero);
                }
                break;
            case 'c':
                if(numero>0) {
                    sistema = serie_Multiplicacion(numero);
                }
                break;
        }
    } while(opcion!='d');

    return 0;
}

// Funcion para solicitar numero por pantalla
int solicitar_Numero(void) {
    int impar;
    do {
        printf("\nNo. (Entre 1 y 19) : ");
        scanf(" %d",&impar);
    } while(impar<0 || impar>19 || impar%2==0);

    return impar;
}

// Funcion para calcular el sumatorio del numero

int serie_Numerica(numero) {
    int x;
    int suma=0;
    printf("\nSerie Numerica ");
    for(x=1;x<=numero;x+=2) {
        suma+=x;
        printf("%d",x);
        if(x<numero) printf("+");
    }
    printf(" = %d\n",suma);
    return 0;
}


// Función para calcular el factorial del numero

int serie_Multiplicacion(numero) {
    int x;
    int multiplica=1;
    printf("\nSerie Multiplicacion ");
    for(x=1;x<=numero;x+=2) {
        multiplica*=x;
        printf("%d",x);
        if(x<numero) printf("*");
    }
    printf(" = %d\n",multiplica);
    return 0;
}