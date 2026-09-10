#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
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
    int n;cin >> n;
    vi a(n);
    for (int i = 0; i < n; ++i) cin>>a[i];
    if (n == 1) {
        cout <<0<<nl;
        return 0;
    }
    int jumps = 0;
    int ce = 0;   
    int f = 0;   
    for (int i = 0; i < n - 1; ++i) {
        f = max(f, i + a[i]);
        if (i == ce) {
            jumps++;
            ce = f;
            if (ce >= n - 1) {
                cout << jumps <<nl;
                return 0;
            }
            if (ce <= i) {
                cout << -1<<nl;
                return 0;
            }
        }
    }
    cout<<-1<<nl;
    return 0;
}