#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fast_io;
    ll n;cin>>n;
    if(n==0)cout<<"";
    int p = 1;
    while (n > 0) {
        if (n % 2 != 0)cout << p << " ";
        n/= 2;
        p*=2;
    } 
    return 0;
}