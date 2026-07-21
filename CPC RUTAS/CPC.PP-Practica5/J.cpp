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
int t, k;
int main(){
    fast_io;
    cin>>t;
    while (t--) {
        cin>>k;
        vi s(k);
        for (auto &x : s)cin>>x;
        vi idx(6);
        for (int i = 0; i < 6; i++) idx[i] = i;
        while (true) {
            for (int i = 0; i < 6; i++)
                cout << s[idx[i]] << " \n"[i == 5];
            int p = 5;
            while (p >= 0 && idx[p] == k - 6 + p) p--;
            if (p < 0) break;
            idx[p]++;
            for (int i = p+1; i < 6; i++) idx[i] = idx[i-1] + 1;
        }
        if (t) cout<<nl;
    }
    return 0;
}