#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);    

int main(){
    fast_io;
    int c; cin>>c;
    int n;cin>>n;
    if(c<n){
        cout<<c+1<<nl;
    }else if(c>n){
        cout<<0<<nl;
    }else if(c==n){
        cout<<n<<nl;
    }
    return 0;
}