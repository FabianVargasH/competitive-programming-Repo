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

void solve(){
    ll n;cin>>n;
    ll m;cin>>m;
    ll mat [n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>mat[i][j];
        }
    }
    cout<<"Row averages:"<<nl;
    for (int i = 0; i < n; i++){
        long double sumF = 0;
        for (int j = 0; j <m;j++){
            sumF += mat[i][j];
        }
        cout<<fixed<<setprecision(2)<<(long double)sumF/m<<" ";                 
    }
    cout<<nl<<"Column averages:"<<nl;
    for (int i = 0; i < m; i++){
        long double sumC = 0;
        for (int j = 0; j <n; j++){
            sumC += mat[j][i];                 
        }
        cout<<fixed<<setprecision(2)<<(long double)sumC/n<<" ";
    }
}

int main(){
    fast_io;
    solve();

    return 0;
}