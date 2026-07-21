#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

string base(ll n, ll b){
    if(n==0) return "0";
    string digits = "0123456789ABCDEF";
    string result ="";
    while(n>0){
        result = digits[n%b]+ result;
        n/=b;
    }
    return result;
}


int main(){
    fast_io;
    ll n,b;cin>>n>>b;
    string baseAnsw = base(n,b);
    reverse(baseAnsw.begin(),baseAnsw.end());
    cout<<baseAnsw<<nl;
    return 0;
}