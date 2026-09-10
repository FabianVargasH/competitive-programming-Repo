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
    while(t--){
        int n;
        cin>>n;
        vll a(n);
        for(auto &x : a) cin >> x;
        if(n > 1){
            for(int i = 0; i <= n-2; i++){
                if(a[i] == 1) a[i] += 1;
            }
            for(int i = 0; i <= n-2; i++){
                if(a[i+1] % a[i] == 0) a[i+1] += 1;
            }
        }

        for(int i = 0; i < n; i++){
            cout << a[i] << " \n"[i == n-1];
        }
    }
    return 0;
}