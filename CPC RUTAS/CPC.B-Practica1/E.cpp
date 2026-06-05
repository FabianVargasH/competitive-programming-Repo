#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

void generate(string s, ll n){
    if(s.size()==n){
        cout<<s<<nl;
        return;
    }
    generate(s+'0',n);
    generate(s+'1',n);
}
int main(){
    fast_io;
    ll n;cin>>n;
    generate("",n);
    return 0;
}