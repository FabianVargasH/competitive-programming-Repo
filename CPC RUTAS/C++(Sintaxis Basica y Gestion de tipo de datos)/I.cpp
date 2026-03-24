#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll m,n; cin>>m>>n;
    ll k[5];
    for(int i=0;i<5;i++) cin>>k[i];
    for(int i=0;i<5;i++){
        if(i%2==0) n += k[i];
        else n -= k[i];
        n = (n % m + m) % m;
        cout<<n<<" ";
    }
    return 0;
}
