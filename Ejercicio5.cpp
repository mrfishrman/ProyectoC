#include <iostream>
#include <cstdlib> // Incluimos la biblioteca necesaria para la función rand()
#include <ctime> // Incluimos la biblioteca necesaria para la función time()
#include <math.h>

using namespace std;

// Esta función calcula el promedio de un array de temperaturas
float mediaAritmetica(int arr[], int n)
{
    float sum = 0.0;

    // Recorremos el array sumando cada nota
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    // Calculamos el promedio y lo retornamos
    float average = sum / n;
    return average;
}

// Esta función calcula la varianza de un array de notas
float calcularVarianza(int arr[], int n) {

    float media = mediaAritmetica(arr, n);
    float sumaCuadrados = 0.0;

    for (int i = 0; i < n; i++) {
        sumaCuadrados += pow(arr[i] - media, 2);  
    }
    return sumaCuadrados / (n - 1);
}

// Esta función calcula la desviación estándar de un array de notas
float desvEstandar(int arr[], int n){
    float varianza = calcularVarianza(arr, n);
    return sqrt(varianza);
}

// Esta función calcula la moda de un array de notas
int moda(int arr[], int n) {
    // Inicializamos el valor de la moda como el primer elemento del arreglo
    int moda = arr[0];
    // Inicializamos la cantidad máxima de repeticiones como 1
    int maxRepeticiones = 1;

    // Recorremos el arreglo
    for (int i = 0; i < n; i++) {
        int repeticiones = 1;
        // Contamos cuántas veces aparece el elemento actual en el arreglo
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                repeticiones++;
            }
        }
        // Si el número de repeticiones es mayor que el máximo, actualizamos la moda
        if (repeticiones > maxRepeticiones) {
            moda = arr[i];
            maxRepeticiones = repeticiones;
        }
    }

    return moda;
}

int main(){

    srand( (unsigned)time(NULL) );; // Inicializamos la semilla para la función rand() con el valor de tiempo actual
    int ALU[100];
    int i;
    // Generamos 100 notas del alumno entre 3 y 8
    for (int i = 0; i < 100; i++)
    {
        int grades = rand() % 7 + 1; // Generamos un número aleatorio entre 1 y 7 para establecer las notas del alumno 
        ALU[i] = grades; // Almacenamos la nota en el arreglo
    }

    int opcion;
    
    cout << "Desea ver todas las notas del alumno y sus estadisticas, o solo las estadisticas? (1 para notas, 0 para solo estadisticas): " << endl;
    cin >> opcion;
    
    if (opcion == 1) {
        for (i = 0; i < 100; i++) {
            cout << "Nota " << i+1 << " : " << ALU[i] << endl;
        }
    } else {
        cout << "No se mostraran las notas." << endl;
    }


    cout << "Las estadisticas del alumno son:" << endl;

    float mediaA = mediaAritmetica(ALU, 100);
    cout << "La media aritmetica del alumno es: " << mediaA << endl;

    float varianza = calcularVarianza(ALU, 100);
    cout << "La varianza del alumno es: " << varianza << endl; 

    float desEst = desvEstandar(ALU, 100);
    cout << "La desviacion estandar del alumno es: " << desEst << endl; 

    int modaa = moda(ALU, 100);
    cout << "La moda del alumno es: " << modaa << endl; 

    return 0;
}