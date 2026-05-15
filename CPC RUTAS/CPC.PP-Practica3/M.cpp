#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main(){
    fast_io;
    ll n; cin>>n;
    bool odd = false;
    bool posible = true;
    for(ll i = 0; i < n; i++){
        ll num; cin>>num;
        if(num % 2 != 0){  
            odd = true;
        } else { 
            if(odd)posible = false;
        }
    }
    if(posible)cout << "YES" << nl;
    else cout << "NO" << nl;   
    return 0;
}