#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define vll vector<ll>
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main (){
    fast_io;
    int n, a[20];cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int mask = 0; mask < (1 << n); mask++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1<<i))sum+= a[i];
            else sum -= a[i];
        }
        if (((sum % 360) + 360)%360==0) {
            cout <<"YES"<<nl;
            return 0;
        }
    }
    cout <<"NO"<<nl;
    return 0;
}