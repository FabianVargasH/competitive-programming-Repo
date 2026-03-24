#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    ll b;cin>>b;
    ll p = 5*b-400;
    cout<<p<<nl;
    if(p==100){
        cout<<0<<nl;
    }else if(p < 100){
        cout<<1<<nl;
    }else{
        cout<<-1<<nl;
    }
    return 0;
}