#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        set<int>s;
        for (int i = 0; i < n; i++){
            int x;cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<nl;
    }
    return 0;
}