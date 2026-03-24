#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    int q;cin>>q;
    while(q--){
        int n;cin>>n;
        string s,t;cin>>s>>t;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            cout<<"YES"<<nl;
        }else cout<<"NO"<<nl;
    }
    return 0;
}