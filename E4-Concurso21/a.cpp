#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    long long ans = 1;
    for(int i = 0; i < 10; i++) {
        long long a; cin >> a;
        ans *= a+1;
    }
    cout << ans-1 << "\n";
}