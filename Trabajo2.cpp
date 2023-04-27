#include <stdio.h> // Librería utilizada
#include <stdlib.h> // Librería utilizada
#include <time.h> // Librería utilizada

int * getRandom(){ // Función *getRandom()
    static int r[10]; // Declaración de arreglo estático de tipo int / r
    int i; // Declaración de variable de tipo int / i --> Contador

    srand((unsigned)time(NULL)); // Declaración de función srand()

    for( i=0; i<10; ++i){ // Ciclo for desde i=0 hasta i<10 con i aumentando
        r[i] = rand(); // Arreglo r i-ésimo igual a función rand()
        printf("r[%d] = %d\n", i, r[i]); // Impresión por pantalla de N° aleatorio
    }
    return r; // La función *getRandom() retorna r
 }

 int main(){ // Función principal
    int *p; // Declaración del puntero *p
    int i; // Declaración de la variable de tipo int / i --> Contador

    // Declaración de la variable p y llamado de la función *getRandom()
    p = getRandom();

    for( i=0; i<10; i++){ // Ciclo for desde i=0 hasta i<10 con i aumentando
        // Impresión por pantalla de N° aleatorio
        printf("*(p + %d) : %d\n", i, *(p+i));
    }   
    return 0; // La función main() retorna 0
}