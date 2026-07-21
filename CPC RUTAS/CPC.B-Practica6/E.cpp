#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define vll vector<ll>
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

ll xor0(ll n){
    ll rem = n%4;
    if(rem==0)return n;
    if(rem==1)return 1;
    if(rem==2)return n+1;
    return 0;
}

int main (){
    fast_io;
    ll t;cin >> t;
    while(t--){
        ll a, b;cin>>a>>b;       
        ll x = xor0(a - 1);
        if (x == b) cout << a << nl;
        else if ((x ^ b) != a) cout << a + 1 <<nl;
        else cout <<a+2<<nl;
    }
    return 0;
}