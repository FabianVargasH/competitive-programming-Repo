#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main (){
    fast_io;
    ll t;cin>>t;
    ll a= 0,b = 0;
    while(t--){
        cin>>a>>b;
        cout<<(a^b)<<nl;
    }
    return 0;
}