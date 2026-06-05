#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

bool isPrime(ll n) {
    if (n < 2)
    return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0)
        return false;
    }
    return true;
}

int main(){
    fast_io;
    ll a,b;cin>>a>>b;
    ll cont = 0;
    for (int i = a; i <= b; i++){
        if(isPrime(i))cont++;
    }
    cout<<cont<<nl;
    
    return 0;
}