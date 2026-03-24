#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll d, c; cin>>d>>c;
    ll s = (d*50) - (c*10);
    if(d>c){
        s+=500;
    }
    cout<<s<<nl;
    return 0;
}