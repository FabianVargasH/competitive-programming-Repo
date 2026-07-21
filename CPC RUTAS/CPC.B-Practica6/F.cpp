#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define vll vector<ll>
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main (){
    fast_io;
    ll t;cin >> t;
    ll x = 0, y= 0;
    while (t--) {
        cin>>x>>y;
        ll d = x ^ y;
        ll ans = d & -d;
        cout<<ans<<nl;
    }
    return 0;
}