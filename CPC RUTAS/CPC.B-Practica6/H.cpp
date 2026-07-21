#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define vll vector<ll>
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main (){
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        vll ans;
        if (x == 0) {
            for (ll i = 0; i < n; i++) ans.push_back(0);
        } else {
            ll orAcc = 0;
            ll bestM = 1;
            ll bestOr = 0;
            for (ll m = 1; m <= n; m++) {
                ll val = m - 1;
                orAcc |= val;
                if ((orAcc | x) == x) {
                    bestM = m;
                    bestOr = orAcc;
                } else {
                    break;
                }
            }
            ll m = bestM;
            ll orAcc2 = bestOr;
            if (orAcc2 == x) {
                for (ll i = 0; i < m; i++) ans.push_back(i);
                for (ll i = 0; i < n - m; i++) ans.push_back(x);
            } else if (n > m) {
                for (ll i = 0; i < m; i++) ans.push_back(i);
                ans.push_back(x);
                for (ll i = 0; i < n - m - 1; i++) ans.push_back(x);
            } else {
                for (ll i = 0; i < m - 1; i++) ans.push_back(i);
                ans.push_back(x);
            }
        }
        for (ll i = 0; i < (ll)ans.size(); i++) {
            cout <<ans[i]<< " \n"[i == (ll)ans.size()-1];
        }
    }
    return 0;
}