#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
int main(){
    fast_io;
    ll n;cin>>n;
    ll i = 1;
    while(n--){
        if(i %2 == 0)cout<<i<<" ";
        else if(i %3 == 0)cout<<i<<" ";
        else if(i%5 == 0)cout<<i<<" ";
        i++;
    }
    return 0;
}
