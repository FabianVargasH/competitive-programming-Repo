#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    ll n;cin>>n;
    if(n%400 == 0)cout<<"YES"<<nl;
    else if(n%4==0 && n%100 != 0)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    return 0;
}