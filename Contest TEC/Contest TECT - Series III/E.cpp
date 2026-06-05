#include <bits./stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
    fast_io;
    int t;cin >> t;
    while (t--) {
        int n;cin>> n;
        ll x, maximo = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            cin >> x;maximo = max(maximo, x);
        }cout<< maximo<<nl;
    }
    return 0;
}