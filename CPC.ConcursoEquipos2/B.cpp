#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    ll n = 0; cin >> n;
    ll x; cin >> x;
    ll m; cin >> m;
    ll contadorSup = 0, contadorInf = 0;
    
    while(m--){
        ll r; cin >> r;
        if(r >= 1 && r <= x - 1){
            contadorSup++;
        }
        else{
            contadorInf++;
        }
    }
    if(contadorSup == contadorInf){
        cout << contadorSup << nl;  
    } else if(contadorSup > contadorInf){
        cout << contadorInf << nl;
    } else {
        cout << contadorSup << nl;
    }
    
    return 0;
}