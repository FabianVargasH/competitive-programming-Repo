#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define vll vector<ll>
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main (){
    fast_io;
    ll t;cin >> t;
    ll n = 0;
    while (t--){
        cin>>n;
        vll a(n);
        for (int i = 0; i < n; i++) {
            cin>>a[i];
        }
        ll ans = a[0];
        for (int i = 1; i < n; i++) {
            ans &= a[i];
        }
        cout <<ans<<nl;
    }
    return 0;
}