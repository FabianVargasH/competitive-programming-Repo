#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template<class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#ifdef ONLINE_JUDGE
#pragma GCC optimize("Ofast","unroll-loops","omit-frame-pointer","inline","03")
#endif // ONLINE_JUDGE

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define uni(x) (x).erase(unique(all(x)), (x).end())
#define rnk(x, y) upper_bound(all((x)), (y)) - (x).begin()

typedef double ld;
typedef long long ll;
typedef __int128 LL;

mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

static int rnd(int lo, int hi) {
    return uniform_int_distribution<int>(lo, hi)(rng);
}

using ll = long long;

array<vector<int>, 2> manacher(string S) {
    int n = S.size();
    array<vector<int>, 2> p = {vector<int>(n + 1), vector<int>(n)};
    for (int z = 0; z < 2; z++)
        for (int i = 0, l = 0, r = 0; i < n; i++) {
            int t = r - i + !z;
            if (i < r) p[z][i] = min(t, p[z][l + t]);
            int L = i - p[z][i], R = i + p[z][i] - !z;
            while (L >= 1 && R + 1 < n && S[L - 1] == S[R + 1])
                p[z][i]++, L--, R++;
            if (R > r) l = L, r = R;
        }
    return p;
}

vector<ll> centro(string &a, string &b) {
    int n = a.size();
    auto pa = manacher(a);
    auto pb = manacher(b);

    vector<ll> ta(n + 1, 0), res(n, 0);

    for (int c = 0; c < n; c++) {
        int r = min(pa[1][c], pb[1][c]);
        ta[c]++, ta[c + r + 1]--;
    }

    for (int c = 1; c < n; c++) {
        int r = min(pa[0][c], pb[0][c]);
        if (r > 0)
            ta[c]++, ta[c + r]--;
    }

    ll cur = 0;
    for (int i = 0; i < n; i++) {
        cur += ta[i];
        res[i] = cur;
    }
    return res;
}

void solve() {
    string a, b;
    cin >> a >> b;
    int n = a.size();

    int L1 = n;
    for (int i = 1; i <= n; i++) {
        if (a[i - 1] != b[n - i] || b[i - 1] != a[n - i]) {
            L1 = i - 1;
            break;
        }
    }

    if (!L1) {
        cout << "0\n";
        return;
    }

    auto AB = centro(a, b);

    reverse(all(a));
    reverse(all(b));

    auto BA = centro(a, b);

    ll sol = 0;
    for (int k = 1; k <= L1; k++) {
        if (k == n) {
            sol += 1;
        } else {
            int p = n - k - 1;
            sol += 1 + AB[p] + BA[p];
        }
    }

    cout << sol << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc = 1;
    cin >> tc;

    while (tc--)
        solve();
}