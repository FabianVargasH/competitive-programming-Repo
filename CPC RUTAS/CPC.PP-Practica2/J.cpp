#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    ll n=0;cin>>n;
    ll factorial = 1;
    if(n>=5) cout<<0<<nl;
    else{
        for(int i = 1; i<=n;i++) factorial*=i;
        cout<<factorial %10<<nl;
    }
    return 0;
}