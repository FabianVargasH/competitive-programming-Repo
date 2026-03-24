#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    ll a,b,r;cin>>a>>b>>r;
    if(a*a + b*b >(4*r*r)){
        cout<<"NO"<<nl;
    }else cout<<"YES"<<nl;
    return 0;
}