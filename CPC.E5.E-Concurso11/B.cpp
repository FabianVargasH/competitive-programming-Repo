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

bool solve(){
    ll n,d;cin>>n>>d;
    if(!n&&!d)return false;
    vll x(n);
    for(ll i=0;i<n;i++)cin>>x[i];
    ll c=0,e=-1;
    for(ll i=0;i<n;i++){
        if(x[i]>e){
            c++;
            //cout<<c<<" ";
            //e= x[i]+2;
            //cout<<e<<nl;
            e=x[i]+2*d;
        }
    }
    cout<<c<<nl;
    return true;
}

int main(){
    fast_io;
    while(solve());
    return 0;
}