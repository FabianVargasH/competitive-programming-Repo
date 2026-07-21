#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define vll vector<ll>
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main (){
    fast_io;
    ll n;
    ll l, r, x; cin>>n>>l>>r>>x;
    vll c(n);
    for (int i = 0; i < n; i++) cin >> c[i];
    sort(c.begin(), c.end());
    int count_ = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (c[j] - c[i] < x) continue;
            int mid = j - i - 1;
            for (int mask = 0; mask < (1 << mid); mask++) {
                long long sum = c[i] + c[j];
                for (int k = 0; k < mid; k++) {
                    if (mask & (1 << k)) sum += c[i + 1 + k];
                }
                if (sum >= l && sum <= r)count_++;
            }
        }
    }
    cout <<count_<< nl;
    return 0;
}