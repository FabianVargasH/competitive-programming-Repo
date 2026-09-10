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
    double ans = -1.0;
    for(int i = 0; i < n; i++){
        ll x1, y1, x2, y2;cin>>x1>>y1>>x2>>y2;
        bool cruza = (x1 < 0 && x2 > 0) || (x1 > 0 && x2 < 0);
        if(!cruza) continue;
        double m = (double)(y2 - y1)/(double)(x2 - x1);
        double b = y1 - m * x1;
        if(b > 0){
            if(ans<0 || b<ans)ans = b;
        }
    }
    cout <<fixed<<setprecision(16)<<ans<<nl;
    return 0;
}