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
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            int val = (row + col) % n + 1;
            cout<<val;
            if(col != n - 1)cout<< ' ';
        }
        cout<<nl;
    }
    return 0;
}