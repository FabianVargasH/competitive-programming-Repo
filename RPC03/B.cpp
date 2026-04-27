#include <bits/stdc++.h>
using namespace std;

struct Nodo {
    int tipo; 
    int valor; 
    int numHijos;
    int primerHijo;
};

Nodo arbol[100005];
int nivelInicio[25];
int n, tipoRaiz;
int dpFalso[100005], dpVerdadero[100005];

int evaluar(int x) {
    if (arbol[x].tipo == 0) return arbol[x].valor;
    
    if (arbol[x].tipo == 1) {
        for (int i = 0; i < arbol[x].numHijos; i++) {
            if (!evaluar(arbol[x].primerHijo + i)) return 0;
        }
        return 1;
    } else {
        for (int i = 0; i < arbol[x].numHijos; i++) {
            if (evaluar(arbol[x].primerHijo + i)) return 1;
        }
        return 0;
    }
}

void calcular(int x) {
    if (arbol[x].tipo == 0) {
        if (arbol[x].valor == 1) {
            dpFalso[x] = 1;
            dpVerdadero[x] = 0;
        } else {
            dpFalso[x] = 0;
            dpVerdadero[x] = 1;
        }
        return;
    }
    
    for (int i = 0; i < arbol[x].numHijos; i++) {
        calcular(arbol[x].primerHijo + i);
    }
    
    if (arbol[x].tipo == 1) {
        int sumaV = 0;
        for (int i = 0; i < arbol[x].numHijos; i++) {
            sumaV += dpVerdadero[arbol[x].primerHijo + i];
        }
        dpVerdadero[x] = sumaV;
        
        dpFalso[x] = 1000000000;
        for (int i = 0; i < arbol[x].numHijos; i++) {
            int hijo = arbol[x].primerHijo + i;
            int costo = dpFalso[hijo];
            for (int j = 0; j < arbol[x].numHijos; j++) {
                if (j != i) {
                    costo += dpVerdadero[arbol[x].primerHijo + j];
                }
            }
            if (costo < dpFalso[x]) dpFalso[x] = costo;
        }
    } else {
        int sumaF = 0;
        for (int i = 0; i < arbol[x].numHijos; i++) {
            sumaF += dpFalso[arbol[x].primerHijo + i];
        }
        dpFalso[x] = sumaF;
        
        dpVerdadero[x] = 1000000000;
        for (int i = 0; i < arbol[x].numHijos; i++) {
            int hijo = arbol[x].primerHijo + i;
            int costo = dpVerdadero[hijo];
            for (int j = 0; j < arbol[x].numHijos; j++) {
                if (j != i) {
                    costo += dpFalso[arbol[x].primerHijo + j];
                }
            }
            if (costo < dpVerdadero[x]) dpVerdadero[x] = costo;
        }
    }
}

int main() {
    cin >> n;
    char c;
    cin >> c;
    if (c == 'A') tipoRaiz = 1;
    else tipoRaiz = 2;
    
    string basura;
    getline(cin, basura);
    
    int idActual = 0;
    nivelInicio[0] = 0;
    
    for (int nivel = 0; nivel < n; nivel++) {
        string linea;
        getline(cin, linea);
        stringstream ss(linea);
        string token;
        int contador = 0;
        
        while (ss >> token) {
            if (token == "T") {
                arbol[idActual].tipo = 0;
                arbol[idActual].valor = 1;
                idActual++;
                contador++;
            } else if (token == "F") {
                arbol[idActual].tipo = 0;
                arbol[idActual].valor = 0;
                idActual++;
                contador++;
            } else {
                int numero = 0;
                for (int i = 0; i < token.size(); i++) {
                    numero = numero * 10 + (token[i] - '0');
                }
                if (nivel % 2 == 0) arbol[idActual].tipo = tipoRaiz;
                else arbol[idActual].tipo = 3 - tipoRaiz;
                arbol[idActual].numHijos = numero;
                idActual++;
                contador++;
            }
        }
        
        if (nivel + 1 < n) {
            nivelInicio[nivel + 1] = idActual;
        }
    }
    for (int nivel = 0; nivel < n - 1; n++) {
        int posHijo = nivelInicio[nivel + 1];
        for (int i = 0; i < nivelInicio[nivel + 1] - nivelInicio[nivel]; i++) {
            int nodo = nivelInicio[nivel] + i;
            if (arbol[nodo].tipo != 0) {
                arbol[nodo].primerHijo = posHijo;
                posHijo += arbol[nodo].numHijos;
            }
        }
    }
    
    int raiz = nivelInicio[0];
    int original = evaluar(raiz);
    calcular(raiz);
    
    if (original == 1) {
        cout << dpFalso[raiz] << endl;
    } else {
        cout << dpVerdadero[raiz] << endl;
    }
    
    return 0;
}