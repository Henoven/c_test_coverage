#include <stdio.h>
/*
Código que muestra los números
enteros desde 1 hasta N y sus cuadrados, calculados
solamente con sumas.
*/



int cuadrados (int n)

{
    // Declaración de variables a utilizar
    int x = 0;
    int contador=0;
    int cuadrado = 0;
    int impares=0;
    
    // Crear un bucle que cuente desde 1 hasta el
    // numero de elementos indicados
    for(contador=1; contador<=n; contador++) {
        // Visualizar numero e inicializar las variables en cada
        // iteracion del bucle para realizar los cálculos
        printf("\nNo. %d = ",contador);
        cuadrado=0;
        impares=1;
        x=1;
        // Utilizar un bucle do...while para mostrar
        // el progreso de la suma de los números
        do {
            printf(" %d ",impares);
            // si no es el ultimo numero mostrar el símbolo +
            if(x<contador) printf("+");
            cuadrado+=impares;
            impares+=2;
            x++;
        } while(x<=contador);
        // Visualizar el resultado final del cuadrado calculado
		
        printf(" = %d ",cuadrado);
    }
	
	if (cuadrado%3==0)
	{
		 printf("El resultado %d es divisible exactamente por 3 \n ",cuadrado);
	}
	else 
		printf("El resultado %d No es divisible exactamente por 3 \n ",cuadrado);
	
    return 0;
}