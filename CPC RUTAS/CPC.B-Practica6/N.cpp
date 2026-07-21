#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define vll vector<ll>
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main (){
    fast_io;
    ll l, r;cin >> l >> r;
    if (l==r) {
        cout<<0<< nl;
        return 0;
    }
    ll diff = l^r;
    ll mask = 1;
    while (mask <= diff) mask <<= 1;
    mask--;
    cout<<mask<<nl;
    return 0;
}