#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    ll t; cin>>t;
    while(t--){
        ll cursedEnery;cin>>cursedEnery;
        if(cursedEnery >= 1900)cout <<"Division 1"<<nl;
        else if(cursedEnery >= 1600)cout<<"Division 2"<<nl;
        else if(cursedEnery >= 1400)cout<<"Division 3"<<nl;
        else cout <<"Division 4\n";
    }
    return 0;
}

