#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define nl '\n' 

int main(){
    fast_io;
    int distancia, duracionVela;
    ll costoPorRemo, costoReparacion; cin>>distancia >>costoPorRemo>>costoReparacion>>duracionVela;
    vector<int> viento (distancia +1);
    for (int i = 1; i <= distancia; i++){
        cin>>viento[i];
    }
    vector<int>prefixViento(distancia+1,0);
    for(int i=1; i<= distancia; i++){
        prefixViento[i] = prefixViento[i-1] + viento[i];
     }
     vector<ll> costoMinimo(distancia + 1, LLONG_MAX);
     costoMinimo[0] = 0;
     for (int i = 1; i <= distancia; i++){
        if(costoMinimo[i-1] != LLONG_MAX){
            costoMinimo[i] = min(costoMinimo[i], costoMinimo[i-1] + costoPorRemo);
        }
        int finVela = min(i+duracionVela -1, distancia);
        int vientoRango = prefixViento[finVela] - prefixViento[i-1];
        int farsakSinViento = (finVela -i + 1) - vientoRango;
        ll costoReparar = costoReparacion + (ll)farsakSinViento * costoPorRemo;
        if(costoMinimo[i-1] != LLONG_MAX){
            costoMinimo[finVela] = min(costoMinimo[finVela], costoMinimo[i-1] + costoReparar);
        }
     }
     cout<<costoMinimo[distancia]<<nl;     
    return 0;
}

