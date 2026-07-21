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
    int n;cin>>n;
    while(n--){
        ll A, B, C;cin>>A>>B>>C;
        bool found = false;
        ll bx, by, bz;
        for(ll x = -100; x <= 100; x++){
            for(ll y = -100; y <= 100; y++){
                ll z = A - x - y;
                if(x == y || x == z || y == z) continue;
                if(x*y*z != B) continue;
                if(x*x + y*y + z*z != C) continue;

                if(!found || x < bx || (x == bx && y < by)){
                    found = true;
                    bx = x; by = y; bz = z;
                }
            }
        }
        if(found) cout << bx << ' ' << by << ' ' << bz << nl;
        else cout << "NO SOLUTION" << nl;
    }
    return 0;
}