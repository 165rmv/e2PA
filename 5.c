/*
20 puntos

En el programa muchos, 3 procesos hacen un ciclo 3 veces, pero si lo ejecutas, se 
imprimen muchas mas lineas.

Por que?

El fork duplica, solo es necesario quitarlo. 

Corrige el programa. Para que solo salgan las 9 lineas.


*/

#include <stdio.h>
#include <unistd.h>

void funcion(int a, int b);

void call_3_times(int a) {
    int i;

    for(i=0; i<3; i++) {
        printf("Proceso %d, iteracion %d\n", a, i);
        sleep(1);
    }
}

int main() {
    int i;
    call_3_times(0);
    call_3_times(1);
    call_3_times(2);
}
