#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
using vs = vector<string>;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n' 

int main(){
    fast_io;
    ll r,c;cin>>r>>c;
    vector<char> res(c, '.');
    for(int i = 0; i < r; i++){
        string s;cin>>s;
        for(int j = 0;j<c;j++)
            if(s[j]!= '.')
                res[j] = s[j];
    }
    for(int j = 0; j < c; j++) cout <<res[j];
    cout<<nl;
    return 0;
}