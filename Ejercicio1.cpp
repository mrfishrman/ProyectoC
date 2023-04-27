#include <iostream>
using namespace std;

int main(){
    int CLA, CAT, ANT, RES;   //declaracion de variables, clave, categoria, antiguedad y resultado de la evaluación
    float SAL;                //salario del trabajador

    //Leer las variables 
    cout << "Ingrese la clave del trabajador: ";
    cin >> CLA;

    cout << "Ingrese la categoria del trabajador: ";
    cin >> CAT; 

    cout << "Ingrese la antiguedad del trabajador: ";
    cin >> ANT;

    cout << "Ingrese el salario del trabajador: ";
    cin >> SAL;

    //Condiciones
    if ((CAT==3 || CAT==4) && ANT > 5){
        RES = 1;
    }
    else if(CAT==2 && ANT > 7) {
        RES = 1;
    }
    else {
        RES = 0;
    }

    //Mostrar resultado
    if(RES == 1){
        cout << "Resolucion: " << RES << ". Por lo tanto, el empleado si reune las condiciones." << endl;
    }
    else {
        cout << "Resolucion: " << RES << ". Por lo tanto, el empleado no reune las condiciones." << endl;
    }

    return 0;
}

