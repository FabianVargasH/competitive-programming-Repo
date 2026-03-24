#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin>>n;
    int mcm = abs(2*3)/__gcd(2,3);
    cout<<(n/2)+(n/3)-(n/mcm)<<nl;
    return 0;
}

