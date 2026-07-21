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
int n;
int main(){
    fast_io;
    cin >> n;
    vector<vi> mat(n, vi(n, 0));
    int r = n/2, c = n/2;
    mat[r][c] = 1;
    int dr[4] = {0, 1, 0, -1};
    int dc[4] = {-1, 0, 1, 0};
    ll total = (ll)n * n, val = 2;
    int step = 1, d = 0;
    while (val <= total) {
        for (int rep = 0; rep < 2 && val <= total; rep++) {
            for (int i = 0; i < step && val <= total; i++) {
                r += dr[d]; c += dc[d];
                mat[r][c] = (int)val++;
            }
            d = (d + 1) % 4;
        }
        step++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " \n"[j == n-1];
    }
    return 0;
}