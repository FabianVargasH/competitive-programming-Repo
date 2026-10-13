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

void solve(){
    ll n;cin>>n;
    vi a(n);
    for(int i = 0; i< n; i++)cin>>a[i];
    sort(a.begin(),a.end());
    ll p = 0;
    for(int i = 0;i<n;){
        int j = i;
        //cout<<j<<nl;
        while(j<n && a[j] == a[i]) j++;
        p+=(j-i)/2;
        //cout<<p<<nl;
        i=j;
    }
    //cout<<p<<nl;
    if(p>=2)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}

int main(){
    fast_io;
    solve();
    return 0;
}

//f= 1 0 par
//f = 2 1 par
//f = 4,5 2 pares
//p>=2 YES