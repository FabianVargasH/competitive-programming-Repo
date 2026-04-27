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

const ll oo = 1e18;

const ll MAX = 2e5 + 5;

ll n, q, a[MAX], ft[2][MAX];

ll query(ll id, ll p) {
    auto &abi = ft[id];
    ll r = 0;
    for (int i = p; i > 0; i -= i & -i)
        r += abi[i];
    return r;
}

void update(ll id, ll p, ll v) {
    auto &abi = ft[id];
    for (int i = p; i < MAX; i += i & -i)
        abi[i] += v;
}
void solve() {
    cin >> n >> q;
    ll INV = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        INV += i - 1 - query(0, a[i]);
        update(0, a[i], 1);
        update(1, i, a[i]);
    }
    while (q--) {
        ll o, x;
        cin >> o >> x;
        if (o == 1) {
            if (a[x] > a[x + 1])
                INV--;
            else
                INV++;
            update(1, x + 0, +(a[x + 1] - a[x]));
            update(1, x + 1, +(a[x] - a[x + 1]));
            swap(a[x], a[x + 1]);
        } else {
            ll nINV = INV + x * (n + 1) - query(1, x) * 2LL;
            cout << nINV << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc = 1;
//    cin >> tc;

    while (tc--)
        solve();
}