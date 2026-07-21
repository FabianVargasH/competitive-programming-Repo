#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

ll lcm(ll a, ll b){
    return a/__gcd(a,b)*b;
}

int main(){
    fast_io;
    ll a,b,c;cin>>a>>b>>c;
    cout<<lcm(lcm(a,b),c)<<nl;
    return 0;
}