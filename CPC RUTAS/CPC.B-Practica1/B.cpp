#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;
typedef long double ld;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fast_io;
    ll n;cin>>n;
    if(n==0){
        cout<<0<<nl;
        return 0;
    }
    ll l = 0, r = 1e9, ans = 0;
    while(l <= r) {
        ll mid = l + (r - l) / 2;
        if(mid <= n / mid) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << ans << '\n';
    return 0;
}