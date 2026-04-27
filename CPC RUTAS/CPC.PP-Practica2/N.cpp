#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
int main(){
    fast_io;
    int n;cin>>n;
    int count = 0;
    int power = 0;
    while(n > 0) {
        if(n & 1) count++;
        n >>= 1;
        power++;
    }
    cout << count << nl;
    return 0;
}