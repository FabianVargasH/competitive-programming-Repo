#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define nl '\n' 

int main(){
    fast_io;
    ll n;cin >> n;
    ll pw = 1; 
    while (pw * 3 <= n) pw *= 3;
    ll ans;
    if (n <2*pw)      
        ans =n+pw;
    else                
        ans = 3*n-3*pw;
    cout <<ans<< nl;
    return 0;
}