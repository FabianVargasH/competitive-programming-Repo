#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fast_io;
    ll n;cin >> n;
    if (n == 1) {
        cout <<"1"<<nl;
        return 0;
    }
    ll sum = 1;
    ll maxK = (n - 1) / 2;
    for (ll k = 1; k <= maxK; k++) {
        sum += (2*k + 1) * (2*k + 1);               
        sum += (2*k - 1) * (2*k - 1) + 4 * k;       
    }cout <<sum<<nl;
    return 0;
}