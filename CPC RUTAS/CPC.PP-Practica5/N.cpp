#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
#define pb push_back
#define nl '\n'
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef pair<int,ll> pil;

int main(){
    fast_io;
    ll x, y;cin>>x>>y;
    ll q = (x - 1) / (y - 1);
    ll r = (x - 1) % (y - 1);
    ll ans = q * y + r + 1;
    cout <<ans<<nl;
    return 0;
}