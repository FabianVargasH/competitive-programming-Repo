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
    int t;cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int ans = (int)s.size();
        for (int i = 0; i < (int)s.size(); ) {
            if (i + 1 < (int)s.size() && s[i] == '0' && s[i + 1] == '0') {
                ans--;      
                i += 2;
            } else {
                i++;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}