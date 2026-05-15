#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fast_io;
    ll n;cin>>n;
    ll test = n;
    ll power =1;
    while(test--){
        cout<<power<< " ";
        power*=2;
        if(n<power){
            return 0;
        }
    }
    return 0;
}