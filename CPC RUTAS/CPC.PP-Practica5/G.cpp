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

int adv(int v, int s){
    return ((v - 1 + s) % 9 + 9) % 9 + 1;
}

int main(){
    fast_io;
    int n, s; cin>>n>>s;
    int rs = s;
    for(int k = 1; k <= n; k++){
        if(k > 1) rs = adv(rs, k);
        int len = n - k + 1;
        vi r;
        r.pb(rs);
        int v = rs;
        for(int j = 0; j < len - 1; j++){
            v = adv(v, k + j);
            r.pb(v);
        }
        cout << string(2 * (k - 1), ' ');
        for(int i = 0; i < (int)r.size(); i++){
            cout << r[i];
            if(i != (int)r.size() - 1) cout<< ' ';
        }
        cout << nl;
    }
    return 0;
}