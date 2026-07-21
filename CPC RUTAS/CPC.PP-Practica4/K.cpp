#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define vll vector<ll>

int main(){
    fast_io;
    int n;cin >> n;
    vll a(n);
    for (int i = 0; i < n; i++) {
        cin >>a[i];
    }
    ll r = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i]>r +1) {
            break;
        }
       r += a[i];
    }
    cout<<r+1<<nl;
    return 0;
}