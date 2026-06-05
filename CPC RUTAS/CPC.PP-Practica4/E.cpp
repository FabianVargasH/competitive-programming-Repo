#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fast_io;
    int n;cin>>n;
    for(int i = 0; i < n; i++) {
        cout <<string(n, '*')<<nl;
    }
    return 0;
}