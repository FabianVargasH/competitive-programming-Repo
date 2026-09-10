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

const ll MOD = 1000000007LL;

ll modpow(ll base, ll exp, ll mod){
    base %= mod;
    if(base < 0) base += mod;
    ll result = 1;
    while(exp > 0){
        if(exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}
int main(){
    fast_io;
    int t;
    cin >> t;
    while(t--){
        int n; ll k;
        cin>>n>>k;
        vll a(n);
        for(auto &x : a) cin>>x;
        ll S = 0;
        for(auto x : a) S += x;
        ll best = a[0];
        ll cur = a[0];
        for(int i = 1; i < n; i++){
            cur = max(a[i], cur + a[i]);
            best = max(best, cur);
        }
        ll M = max(0LL, best);
        ll pw = modpow(2, k, MOD);
        ll term = (M % MOD) * ((pw - 1 + MOD) % MOD) % MOD;
        ll Smod = ((S % MOD) + MOD) % MOD;
        ll ans = (Smod + term) % MOD;
        cout <<ans<< nl;
    }
    return 0;
}