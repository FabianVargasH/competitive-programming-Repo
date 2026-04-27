#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ln '\n'
#define vi vector<int>
#define vll vector<ll>

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
ll bin_s(ll low, ll high, ll target) {
    // cout << low << ' ' << high << ln;
    while (low <= high) {
        ll m = low + (high - low) / 2;
        if (m * (m + 1) / 2 < target) {
            low = m + 1;
        } else {
            high = m - 1;
        }
        // cout << low << ' ' << high << ln;
    }
    return low;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    ll x = bin_s(1, 100000000, n);

    ll z = n - x * (x - 1) / 2 - 1;
    ll y = gcd(z, x);
    if (z == 0) {
        cout << x << ln;
    } else
        cout << x << ' ' << z / y << '/' << x / y << ln;
    return 0;
}
/*
int t;
cin>>t;
for (int _ = 0; _<t;_++){
}
*/