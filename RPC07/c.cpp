#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;

    int ans = 0;
    while(t--) {
        int n; cin >> n;
        if(n % 2 != 0) {
            ans++;
        }
    }

    cout << ans << "\n";
}