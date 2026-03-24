#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    int n;cin>>n;
    if(n!=0 && 2048%n==0){
        cout<<1<<nl;
    }else{
        cout<<0<<nl;
    }
    return 0;
}
