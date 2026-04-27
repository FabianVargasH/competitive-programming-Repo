#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    ll n; cin>>n;
    ll invertido =0;
    ll digito = 0;
    ll numero = n;
    if(n<0){
        cout<<"NO"<<nl;
    }
    while(n != 0){
        digito = n%10;
        invertido = invertido * 10 + digito;
        n /= 10;
    }
    if(invertido == numero)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    return 0;
}