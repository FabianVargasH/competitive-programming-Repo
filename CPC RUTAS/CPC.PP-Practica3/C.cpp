#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fast_io;
    const ll MOD = 1e9 + 7;
    ll n; cin>>n;
    ll fact = 1;
    ll cont = 1;
    while(n--){
        fact= (fact*cont) %MOD;
        cont++;
        cout<<fact<<" ";
    }
    return 0;
}