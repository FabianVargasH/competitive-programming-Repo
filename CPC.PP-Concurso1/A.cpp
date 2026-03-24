#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    ll r; cin>>r;
    ll s; cin>>s;
    r = r* 8;
    s = s*3;
    cout<<(r+s)-28<<nl;
    return 0;
}