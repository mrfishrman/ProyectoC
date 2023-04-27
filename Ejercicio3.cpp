#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void printBinary(int num) {
    int binary[8] = {0};
    int index = 0;

      while (num > 0) {                  // Convertir número a binario mediante división sucesiva
        binary[index] = num % 2;
        num /= 2;
        index++;
    }
      for (int i = 7; i >= 0; i--) {     // Imprimir cada bit del número con un guion separador
        cout << binary[i];
         if (i != 0) {
            cout << "-";
        }
    }
}

int main(){

    srand( (unsigned)time(NULL) );;                 // Se puede usar nullptr en lugar de 0 para indicar un puntero nulo
    int arr[256];                      // Creamos un array para almacenar los números aleatorios

    for (int i = 0; i < 256; i++)      // Generamos los números aleatorios y los almacenamos en el array
    {
        arr[i] = rand() % 256;         // Generamos números aleatorios entre 0 y 255
    }

    int index;                         // Pedimos al usuario que ingrese el índice del arreglo que quiere ver
    cout << "Ingrese el indice del arreglo que quiere ver: ";
    cin >> index;

    if (index < 0 || index >= 256)     // Verificamos que el índice esté dentro del rango del arreglo
    {
        cout << "Indice fuera de rango" << endl;
        return 0;
    }

    
    // Imprimimos el elemento del arreglo correspondiente al índice ingresado
    cout << "El elemento del arreglo en la posicion " << index << " es: " << arr[index] << endl;

    cout << "Numero " << arr[index] << " en binario: " ;
    printBinary(arr[index]);
    cout << endl; 
    
    return 0;
}