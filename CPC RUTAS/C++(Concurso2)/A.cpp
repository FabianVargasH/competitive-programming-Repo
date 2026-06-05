#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
typedef vector<ll> vll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main (){
    fast_io;
     int n;cin>>n;
    cout<<ceil((static_cast<double>(n) / 2)+1) * floor((static_cast<double>(n) / 2)+1)<<nl;
    return 0;
}