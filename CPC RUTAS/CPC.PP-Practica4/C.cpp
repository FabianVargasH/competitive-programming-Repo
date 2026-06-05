#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fast_io;
    ll n;cin>>n;
    while(n!=1){
        if(n%2==0) n = n/2;
        else n  = (3*n)+1;
        cout<<n<<nl;
    }
    return 0;
}