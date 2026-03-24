#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    ll a;cin>>a;
    char op; cin>>op;
    ll b;cin>>b;
    if(op == '+')cout<<a+b<<nl;
    if(op == '-')cout<<a-b<<nl;
    if(op == '*')cout<<a*b<<nl;
    if(op == '/')cout<<a/b<<nl;
    return 0;
}