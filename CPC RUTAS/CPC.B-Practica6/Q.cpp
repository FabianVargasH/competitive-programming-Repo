#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
    fast_io;
    ll n, q;cin >> n >> q;
    while (q--) {
        ll u;
        string s;
        cin >> u >> s;
        stack<pair<ll,ll>> path;
        ll base = 0, sz = n;
        while (true) {
            ll root = base + (sz + 1) / 2;
            if (root == u) break;
            path.push({base, sz});
            ll half = (sz - 1) / 2;
            if (u < root) {
                sz = half;
            } else {
                base = root;
                sz = half;
            }
        }
        for (char c : s) {
            if (c == 'L') {
                if (sz <= 1) continue;
                path.push({base, sz});
                sz = (sz - 1) / 2;
            } else if (c=='R') {
                if (sz <= 1) continue;
                ll root = base+(sz + 1)/2;
                path.push({base, sz});
                base=root;
                sz=(sz - 1)/2;
            } else {
                if (!path.empty()) {
                    ll pb = path.top().first;
                    ll ps = path.top().second;
                    path.pop();
                    base = pb;
                    sz = ps;
                }
            }
        }
        cout <<base +(sz + 1)/ 2<< nl;
    }
    return 0;
}