#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fast_io;
    ll n;cin>>n;
    ll sum = 0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    cout<<sum<<nl;
 
    return 0;
}