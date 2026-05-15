#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fast_io;
    ll a,b;cin>>a>>b;
    ll sum =0;
    while(a>=1){
        cout<<a<< " " <<b<<nl;
        if(a%2!=0)sum+=b;
        if(a==1)break;
        a/=2;
        b*=2;
    }
    cout<<"Result = "<<sum;
    return 0;
}