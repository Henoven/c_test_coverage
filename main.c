#include <stdio.h>
#include "operaciones/include/operaciones.h"
#include "cuadrados/include/Cuadrados.h"

int main(){
    /*Test operaciones.c*/
    serie_numerica();
    solicitar_Numero();
    serie_Numerica(10);
    /*Test Cuadrados.c*/
    //test multiplos de 3
    cuadrados(9);
    //test other numbers
    cuadrados(17);
    return 0;
}