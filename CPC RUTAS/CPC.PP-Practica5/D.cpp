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

bool isPrime(ll n){
    if(n<2)return false;
    for(ll i = 2; i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    fast_io;
    ll n;cin>>n;
    for (ll i = 0; i <=n; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
