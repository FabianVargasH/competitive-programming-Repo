#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define vll vector<ll>
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main (){
    fast_io;
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;
        ll xr = 0;
        for(int i = 0; i < n; i++) {
            ll x;cin >> x;
            xr^= x;
        }
        if (n % 2 == 0) {
            if (xr == 0) cout<<0<<nl;
            else cout<<-1<<nl;
        } else {
            cout<<xr<< nl;
        }
    }
    return 0;
}