#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fast_io;
    ll n;cin>>n;
    ll cont = 0;
    vector<ll>a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 1; i < n-1; i++){
        if(a[i-1]<a[i]&&a[i]>a[i+1]){
            cont++;
        }
    }
    cout<<cont<<nl;
    return 0;
}