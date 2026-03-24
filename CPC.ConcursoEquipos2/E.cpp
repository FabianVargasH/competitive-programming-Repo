#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    ll m;cin >> m;
    ll distancias[1000];
    ll cpd[201] = {};
    for(int i = 0; i < m; i++){
        cin >> distancias[i];
        cpd[distancias[i]]++;
    }
    for(int n = 1; n <= 202; n++){
        bool valido = true;
        for(int d = 0; d <= 200; d++){
            if(cpd[d] == 0) continue;
            int pd;
            if(d < n){
                pd = d + 1;
            } else pd = 2*(n-1) - d + 1;
            if(pd < cpd[d]){
                valido = false;
                break;
            }
        }
        if(valido){
            cout << n <<nl; return 0;
        }
    }
    return 0;
}

