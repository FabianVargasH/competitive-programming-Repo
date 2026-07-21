#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        int n, k; cin>>n>>k;
        vector<int> a(n+1); 
        for (int i = 1; i <= n; i++) cin>>a[i];
        int l = max(1, n - 2*k);
        ll ans = LLONG_MIN;
        for (int i = l; i <= n; i++)
            for (int j = i+1; j <= n; j++)
                ans = max(ans, (ll)i*j - (ll)k*(a[i]|a[j]));
        cout <<ans<< nl;
    }
    return 0;
}