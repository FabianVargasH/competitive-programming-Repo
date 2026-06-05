#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

ll solve(ll n){
    ll answ = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            answ++;
            n--;
        } else n /= 2;
    }
    return answ;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin>>n;
    cout<<solve(n)<<nl;
    return 0;
}
