#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define nl '\n' 

int main(){
    fast_io;
    ll w, s; cin>> w>>s;
    ll c = s*(s+1)/2;
    ll t = 29260*c;
    ll dif = w - t;
    ll ans = dif/110; 
    cout <<ans<< nl;
    return 0;
}