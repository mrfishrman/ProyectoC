#include <iostream>
using namespace std; 

int main(){

    int S;
    float FA, Celcius;
    
    cout << "Sonidos emitidos por minuto por la chicharra: " << endl;
    cin >> S;
    FA = (S / 4.0) + 40.0 ;
    Celcius = (FA - 32) * 5/9;
    cout << "La temperatura es: " << Celcius << " grados Celcius." << endl;

    return 0;
}

