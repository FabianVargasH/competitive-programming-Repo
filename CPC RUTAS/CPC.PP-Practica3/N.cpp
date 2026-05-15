#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fast_io;
    ll n;cin >> n;
    if (n == 0) {
        cout <<0<< endl;
        return 0;
    }
    long double g = 1.0; 
    for (int i = 0; i < 60; i++) {
        g=(g+n/g)/2.0;
    }
    cout <<(ll)floor(g)<<nl;
    return 0;
}