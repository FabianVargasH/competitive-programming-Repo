#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fast_io;
    ll n, m;cin>>n>>m;
    ll g = __gcd(n, m);
    ll top = n + m - g; 
    cout <<top<< nl;
    string seq = "";
    ll pos = 0;
    bool reachedTop = false;
    while (pos != 0 || !reachedTop) {
        if (!reachedTop && pos + n <= top) {
            seq += '+';
            pos += n;
            if (pos == top) reachedTop = true;
        } else if (pos - m >= 0) {
            seq += '-';
            pos -= m;
        } else {
            seq += '+';
            pos += n;
            if (pos == top) reachedTop = true;
        }
    }
    cout <<seq<< nl;
    return 0;
}