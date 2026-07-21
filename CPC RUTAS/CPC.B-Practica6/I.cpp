#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define vll vector<ll>
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main (){
    fast_io;
    ll t;cin >> t;
    while (t--) {
        ll n;
        ll k;cin >> n >> k;
        vector<vector<int>> bits(n, vector<int>(31));
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            for (int j = 0; j < 31; j++) {
                bits[i][j] = x % 2;
                x /= 2;
            }
        }
        vector<int> rBit(31, 1); 
        ll used = 0;
        for (int j = 30; j >= 0; j--) {
            int need = 0;
            for (int i = 0; i < n; i++) {
                if (bits[i][j] == 0) need++;
            }
            if (used + need > k) {
                rBit[j] = 0;
            } else {
                used += need;
            }
        }
        ll ans = 0;
        ll pw = 1;
        for (int j = 0; j < 31; j++) {
            if (rBit[j] == 1) ans += pw;
            pw *= 2;
        }
        cout <<ans<<nl;
    }
    return 0;
}