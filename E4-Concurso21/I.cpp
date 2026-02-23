#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define nl '\n' 

int main(){
    fast_io;
    int cantidadPaises; cin>>cantidadPaises;
    vector<ll> arbol(cantidadPaises + 1, 0);
    vector<ll> poblacion(cantidadPaises + 1);
    for (int i = 1; i <= cantidadPaises; i++) {
        cin >> poblacion[i];
        for (int j = i; j <= cantidadPaises; j += j & (-j))
            arbol[j] += poblacion[i];
    }
    int cantidadTransacciones;
    cin >> cantidadTransacciones;
    for (int i = 0; i < cantidadTransacciones; i++) {
        char tipoTransaccion;
        cin >> tipoTransaccion;
        if (tipoTransaccion == 'U') {
            int pais;
            ll cambio;
            cin >> pais >> cambio;
            poblacion[pais] += cambio;
            for (int j = pais; j <= cantidadPaises; j += j & (-j))
                arbol[j] += cambio;
        } else {
            int paisInicio, paisFin;
            cin >> paisInicio >> paisFin;
            ll sumaFin = 0;
            for (int j = paisFin; j > 0; j -= j & (-j))
                sumaFin += arbol[j];
            ll sumaAntes = 0;
            for (int j = paisInicio - 1; j > 0; j -= j & (-j))
                sumaAntes += arbol[j];
            cout << sumaFin - sumaAntes << "\n";
        }
    }
    return 0;
}


