#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main (){
    fast_io;
    ll n; cin>>n;
    ll a = 0, b = 0, c = 0;
    while(n--){
        cin>>a>>b>>c;
        if(a == b){
            cout<<c<<nl;
        }else if(a == c){
            cout<<b<<nl;
        }else cout<<a<<nl;
    }
    return 0;
}