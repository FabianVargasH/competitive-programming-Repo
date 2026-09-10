#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
#define pb push_back
#define nl '\n'
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<int, ll> pil;

int main() {
    fast_io;
    ll ans = 0;
    for (int i = 0; i < 3; i++) {
        ll h, m, s, c, mm, ss;
        cin >> h >> m >> s >> c >> mm >> ss;
        ll start = h * 3600 + m * 60 + s;
        ll tpp = mm * 60 + ss;
        ll th = c * tpp;
        ll ready = start + th + 600;
        ans = max(ans, ready);
    }
    ll hour =(ans / 3600)%24;
    ll minute = (ans / 60)%60;
    ll second = ans% 60;
    cout<<hour<< " " << minute << " "<<second<<nl;

    return 0;
}