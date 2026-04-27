#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using vll=vector<ll>; 
#define S second 
#define F first 
ll a[500005],b[500005];
ll p[500005];
int main(){
    ll n,m;
    cin>>n>>m;
    vector<pair<vll,ll>> v={{{},1}};
    for(int i=2;i<=n;i++){
        if(p[i]==0){
            v.push_back({{i},i});
            if(i<=n/i){
                for(int j=i*i;j<=n;j+=i)p[j]=i;
            }
        }
        else{
            vll x=v[i/p[i]-1].F;x.push_back(p[i]);sort(x.begin(),x.end());
            v.push_back({x,i});
        }
    }
    sort(v.begin(),v.end());
    while(m--){
        ll a1;
        cin>>a1;
        a1--;
        cout<<v[a1].S<<"\n";
    }
return 0;
}
