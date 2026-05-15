#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fast_io;
    ll n1 = 0, n2 = 0;cin>>n1>>n2;
/*     ll fact1 = 1, i1=2;
    ll fact2 = 1, i2 = 2;
    while(i1<=n1)fact1 *=i1++;
    while(i2<=n2)fact2 *=i2++;
    cout<<fact1/fact2<<nl; */
    ll res = 1;
    for(ll i = n2+ 1;i<=n1;i++){
        res *=i;
    }
    cout<<res<<nl;
    return 0;
}