#include <bits/stdc++.h>
using namespace std;

int main() {
    string texto;
    cin >> texto;
    
    int puntos = 0;
    int posicion = 0;
    int longitud = texto.length();
    
    while (posicion < longitud) {
        if (posicion + 5 <= longitud && texto.substr(posicion, 5) == "boooo") {
            puntos -= 1;
            posicion += 5;
        }
        else if (posicion + 5 <= longitud && texto.substr(posicion, 5) == "bravo") {
            puntos += 3;
            posicion += 5;
        }
        else if (posicion + 2 <= longitud && texto.substr(posicion, 2) == "ha") {
            puntos += 1;
            posicion += 2;
        }
        else {
            posicion++;
        }
    }
    
    cout << puntos << endl;
    
    return 0;
}