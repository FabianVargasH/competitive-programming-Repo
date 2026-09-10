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
    ll n; cin >> n;
    vll a(n);
    ll suma = 0;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        suma += a[i];
    }
    ll cont = 0;
    for(ll i = 0; i < n; i++){
        if(a[i] * n > suma){
            cont++;
        }
    }
    cout<<cont<<nl;
    return 0;
}