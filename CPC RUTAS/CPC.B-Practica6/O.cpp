#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
    fast_io;
    int n;cin>>n;
    vector<int> a(n);
    for (auto &x : a) cin>>x;
    vector<int> cnt(20, 0);
    for (int &x: a)
        for (int b = 0; b < 20; b++)
            if (x>>b&1)cnt[b]++;
    vector<ll>res(n,0);
    for (int b = 0; b < 20; b++)
        for (int i = 0; i < cnt[b]; i++)
            res[i] |= (1LL<< b);
    ll ans = 0;
    for (ll x : res) ans +=x*x;
    cout <<ans<<nl;
    return 0;
}