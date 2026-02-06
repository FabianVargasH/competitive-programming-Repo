#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define nl '\n'

int main(){
    fast_io;
    int cantidadDias;
    cin >> cantidadDias;
    vector<int> dias(cantidadDias);
    for (int i = 0; i < cantidadDias; i++) {
        cin >> dias[i];
    }
    if (cantidadDias == 0) {
        cout << 0 << endl;
        return 0;
    }
    int rachaMaxima = 1;
    int rachaActual = 1;
    
    for (int i = 1; i < cantidadDias; i++) {
        if (dias[i] == dias[i-1] + 1) {
            rachaActual++;
        } else {
            rachaActual = 1;
        }
        
        if (rachaActual > rachaMaxima) {
            rachaMaxima = rachaActual;
        }
    }
    cout << rachaMaxima << endl;
    return 0;
}




