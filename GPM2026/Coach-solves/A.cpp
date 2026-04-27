#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
ll a[500005],b[500005];
int main(){
    ll n,m;
    cin>>n>>m;
    ll x=0;
    ll y=0;
    for(int i=0;i<n;i++){cin>>a[i];x+=a[i];}
    for(int i=0;i<m;i++){cin>>b[i];y+=b[i];}
    if(x*11<=y*10)cout<<"YES\n";
    else          cout<<"NO\n";
return 0;
}
