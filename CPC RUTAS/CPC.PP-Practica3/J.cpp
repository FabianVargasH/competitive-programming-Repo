#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fast_io;
    ll a = 0, b = 0, x =0;cin>>a>>b>>x;
    for(int i = a; i<=b; i++){
        if(i%x==0){
            cout<<i<<" ";
        }
    }
    cout<<nl;
    for (int i = b; i>= a; i--){
        if(i%x == 0){
            cout<<i<<" ";
        }
    }
    return 0;
}