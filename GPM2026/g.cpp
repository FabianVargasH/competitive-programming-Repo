#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    map<int, int> dict;
    int ans = 0;
    while(n--) {
        int a; cin >> a;
        if(dict[a] == 0) {
            dict[a]++;
        } else {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}