#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    ll n;cin>>n;
    while(n > 1 && n % 2 == 0)n = n / 2;
    if(n == 1)
        cout << "1";
    else cout << "0";
    return 0;
}