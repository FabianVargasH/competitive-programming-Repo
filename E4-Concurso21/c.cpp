#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, k;
    cin >> n;
    k = log2(n);
    cout << 2 * (n - (1 << k)) << '\n';
    return 0;
}