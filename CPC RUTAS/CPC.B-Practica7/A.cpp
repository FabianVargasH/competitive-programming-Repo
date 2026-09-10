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
    ll n;cin>>n;
    vll x(n), y(n);
    for (int i = 0; i < n; i++){cin>>x[i];}
    for (int i = 0; i < n; i++){cin>>y[i];}
    ll b = 0;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j <n; j++){
            ll dx = x[i] - x[j];
            ll dy = y[i] - y[j];
            ll d2 = dx*dx + dy*dy;
            b = max(b,d2);
        }
    }
    cout<<b<<nl;
    return 0;
}