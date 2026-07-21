#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define vll vector<ll>
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main (){
    fast_io;
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        vll a(n+1);
        for (int i = 1; i <= n; i++) cin>>a[i];
        int LOG = 1;
        while ((1 << LOG) < n) LOG++;
        LOG++;
        vector<vll> sp(LOG, vll(n+1));
        sp[0] = a;
        for (int j = 1; j < LOG; j++)
            for (int i = 1; i + (1<<j) - 1 <= n; i++)
                sp[j][i] = sp[j-1][i] & sp[j-1][i + (1<<(j-1))];
        auto AND = [&](int l, int r) -> ll {
            int j = __lg(r - l + 1);
            return sp[j][l] & sp[j][r - (1<<j) + 1];
        };
        int q;
        cin >> q;
        while (q--) {
            int l; ll k;
            cin >> l >> k;
            if (a[l] < k) { cout << -1 << nl; continue; }
            int lo = l, hi = n, best = l;
            while (lo <= hi) {
                int mid = (lo + hi) / 2;
                if (AND(l, mid) >= k) {best = mid; lo = mid + 1;}
                else hi = mid - 1;
            }
            cout <<best<< nl; 
        }
    }
    return 0;
}