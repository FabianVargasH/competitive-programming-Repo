#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
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
    ll n;cin>>n;
    if(isPrime(n)) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    return 0;
}