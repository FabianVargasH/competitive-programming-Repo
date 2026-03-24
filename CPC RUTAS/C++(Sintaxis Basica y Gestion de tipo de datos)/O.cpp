#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin>>n;
    ll calc = ((n/2) + (n/3) + (n/5)) - (n/6)-(n/10)-(n/15);
    calc += (n/30);
    cout<<calc;
    return 0;
    return 0;
}