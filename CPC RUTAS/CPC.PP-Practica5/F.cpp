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
    int n;cin >> n;
    vi ks;
    for(int k = 0; k <= n; k++) ks.pb(k);
    for(int k = n-1; k >= 0; k--) ks.pb(k);
    for(int k : ks){
        int p = 2 * (n - k);
        cout << string(p, ' ');
        vi row;
        for(int i = 0; i <= k; i++) row.pb(i);
        for(int i = k-1; i >= 0; i--) row.pb(i);

        for(size_t i = 0; i < row.size(); i++){
            cout << row[i];
            if(i != row.size()-1) cout << ' ';
        }
        cout << nl;
    }

    return 0;
}