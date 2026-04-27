#include <bits/stdc++.h>

using namespace std;

#ifdef ONLINE_JUDGE
#pragma GCC optimize("Ofast","unroll-loops","omit-frame-pointer","inline","03")
#endif // ONLINE_JUDGE

#define all(x) (x).begin(), (x).end()

typedef long double ld;
typedef long long ll;
typedef __int128 LL;

mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

static int rnd(int lo, int hi) {
    return uniform_int_distribution<int>(lo, hi)(rng);
}

const ll oo = 1e18;

const ll MAX = 2e5 + 5;
const ll mod = 1e9 + 7;

typedef struct Edge {
    ll y, w, i;
    Edge(ll y, ll w, ll i) : y(y), w(w), i(i) {}
} i3;

struct Cactus {
    const int LN = 20;
    using i2 = pair<ll, ll>;

    int N{0}, n{0}, m{0}, blocks{0};
    vector<vector<i3>> ady;
    vector<vector<i2>> G;
    vector<vector<ll>> lca;
    vector<ll> root, sum, pos, d0, d1, lvl;
    vector<bool> bridge;
    vector<i3> s;

    void dfs(int x, int p, vector<int> &col) {
        if (col[x] == 1) {
            blocks++;
            int k = s.size() - 1, sz = 0;
            do {
                auto [y, w, i] = s[k--];
                bridge[i] = false;
                d0[y] = d0[x] + sum[blocks], sum[blocks] += w;
                pos[y] = pos[x] + sz++;
                if (y == x)
                    G[y].emplace_back(blocks, 0);
                else
                    G[blocks].emplace_back(y, 0);
            } while (s[k].y != x);
        } else {
            col[x] = 1;
            for (auto [y, w, i]: ady[x])
                if (col[y] < 2 && y != p) {
                    s.emplace_back(y, w, i);
                    dfs(y, x, col);
                    s.pop_back();
                }
            col[x] = 2;
        }
    }

    ll Path(ll x, ll y) {
        if (x == y)
            return 0;
        if (pos[x] < pos[y])
            swap(x, y);
        return min(d0[x] - d0[y], sum[lca[x][0]] - (d0[x] - d0[y]));
    }

    void dfs2(int x, int p) {
        lvl[x] = lvl[p] + 1;
        lca[x][0] = p;

        for (int i = 1; i < LN; i++)
            lca[x][i] = lca[lca[x][i - 1]][i - 1];

        for (auto [y, w]: G[x])
            if (y != p) {
                if (x > n)
                    root[y] = p;
                dfs2(y, x);
            }
    }

    void dfs3(int x, int p) {
        for (auto [y, w]: G[x])
            if (y != p) {
                d1[y] = d1[x] + (x > n ? Path(y, root[y]) : w);
                dfs3(y, x);
            }
    }

    Cactus(int _n, int _m, vector<vector<i3>> &_ady) {
        n = _n;
        m = _m;
        ady = _ady;
        N = n * 2;

        bridge.resize(m + 1, 1);
        root.resize(n + 1);
        pos.resize(n + 1);
        d0.resize(n + 1);
        sum.resize(N + 1);

        iota(all(root), 0);

        ady[0].emplace_back(1, 0, 0);

        vector<int> col(n + 1);
        blocks = n;

        N = n + n / 2 + 1;
        G.resize(N);
        dfs(0, 0, col);

        N = blocks + 1;
        G.resize(N);

        for (int i = 0; i <= n; i++)
            for (auto [y, w, p]: ady[i])
                if (bridge[p])
                    G[i].emplace_back(y, w);

        d1.resize(N);
        lca.resize(N, vector<ll>(LN));
        lvl.resize(N, 0);
        sum.resize(N, 0);

        dfs2(0, 0);
        dfs3(0, 0);
    }

    i2 anc(ll x, ll y) {
        int flip = 0;
        if (lvl[x] < lvl[y])
            swap(x, y), flip = 1;
        for (int i = LN - 1; i >= 0; i--)
            if (lvl[x] - (1 << i) >= lvl[y])
                x = lca[x][i];
        if (x == y)
            return {x, x};
        for (int i = LN - 1; i >= 0; i--)
            if (lca[x][i] != lca[y][i]) {
                x = lca[x][i];
                y = lca[y][i];
            }
        if (flip)swap(x, y);
        return {x, y};
    }

    ll query(ll x, ll y) {
        if (lvl[x] < lvl[y])
            swap(x, y);

        if (lca[x][0] > n && (lca[x][0] == lca[y][0] || lca[x][1] == y))
            return Path(x, y);

        auto [a1, a2] = anc(x, y);

        ll sol = 0;

        if (a1 == a2)
            return d1[x] - d1[y];

        ll z = lca[a1][0];

        if (x != a1)sol += Path(x, root[x]), x = root[x];
        if (y != a2)sol += Path(y, root[y]), y = root[y];

        if (z > n) {
            sol += d1[x] - d1[a1];
            sol += d1[y] - d1[a2];
            sol += Path(a1, a2);
        } else {
            sol += d1[x] + d1[y] - d1[z] * 2;
        }

        return sol;
    }
};

void solve() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<vector<i3>> ady(n + 1);
    for (int i = 1; i <= m; i++) {
        ll x, y, w;
        cin >> x >> y >> w;
        ady[x].emplace_back(y, w, i);
        ady[y].emplace_back(x, w, i);
    }

    Cactus G(n, m, ady);

    while (q--) {
        int x, y;
        cin >> x >> y;
        cout << G.query(x, y) << '\n';
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