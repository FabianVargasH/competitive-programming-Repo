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
typedef pair<ll,ll> pll;
typedef pair<int,ll> pil;
int main(){
    fast_io;
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Check if any a[i] < k
        bool has_less = false;
        for (int i = 0; i < n; i++) {
            if (a[i] < k) {
                has_less = true;
                break;
            }
        }
        
        if (has_less) {
            cout << "Alice\n";
            continue;
        }
        
        // Calculate XOR of (a[i] % (k+1))
        ll xorsum = 0;
        for (int i = 0; i < n; i++) {
            ll mod = a[i] % (k + 1);
            if (mod == 0) {
                // When a[i] % (k+1) == 0, the pile size is k
                xorsum ^= k;
            } else {
                xorsum ^= mod;
            }
        }
        
        if (xorsum != 0) {
            cout << "Alice\n";
        } else {
            cout << "Bob\n";
        }
    }
    
    return 0;
}