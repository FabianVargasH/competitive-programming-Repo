#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fast_io;
    const ll MOD = 1e9 + 7;
    ll n;cin>>n;
    if(n == 0){
        cout<< 0;
        return 0;
    }
    if(n==1){
        cout<<1;
        return 0;
    }
    ll a=0, b = 1;
    ll c;
    for (int i = 2; i <= n; i++){
        c =(a+b)%MOD;
        a = b;
        b = c;
    }
    cout<<b<<nl;
    return 0;
}