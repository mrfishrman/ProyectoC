#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Esta función calcula el promedio de un array de temperaturas
double calculateAverage(int arr[], int n)
{
    double sum = 0.0;

    // Recorremos el array sumando cada temperatura
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    // Calculamos el promedio y lo retornamos
    double average = sum / n;
    return average;
}

// Esta función encuentra la temperatura máxima y mínima en un array
void findMaxMin(int arr[], int n, int& max, int& min)
{
    // Asignamos el primer elemento del array a max y min
    max = arr[0];
    min = arr[0];
    
    // Recorremos el array y comparamos cada elemento con max y min
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
}

int main()
{
    // Inicializamos la semilla del generador de números aleatorios
    srand( (unsigned)time(NULL) );

    // Creamos un array para almacenar las temperaturas
    int TEM[24];
    
    // Generamos las temperaturas para cada hora
    for (int i = 0; i < 24; i++)
    {
        int temp = rand() % 23 + 5; // Generamos temperaturas entre 5 y 27 grados Celsius
        TEM[i] = temp;
        
    }

    // Imprimimos las temperaturas generadas
    cout << "Temperaturas registradas en el exterior:" << endl;
    for (int i = 0; i < 24; i++)
    {
        cout << "Hora " << i+1 << ": " << TEM[i] << " grados Celsius" << endl;
    }

    // Calculamos el promedio de las temperaturas
    double average = calculateAverage(TEM, 24);
    cout << "El promedio en grados celcius es: " << average << endl;

    // Encontramos la temperatura máxima y mínima
    int max, min;
    findMaxMin(TEM, 24, max, min);
    cout << "La temperatura minima del dia en grados celcius es: " << min << endl;
    cout << "La temperatura maximo del dia en grados celcius es: " << max << endl;

    return 0;
}