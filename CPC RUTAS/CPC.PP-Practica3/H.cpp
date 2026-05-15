#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fast_io;
    ll n;cin>>n;
    cout<<n;
    while(n>=10){
        ll invert = (n%10)*10+(n/10);
        if(n>= invert){
            n = n - invert;
        }else{
            n = invert - n;
        }
        cout<<" "<< n;
    }
    return 0;
}