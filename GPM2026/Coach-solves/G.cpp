#include <bits/stdc++.h>
using namespace std;

// #pragma GCC optimize ("Ofast")
// #pragma GCC optimize ("unroll-loops")
// #pragma GCC target ("avx,avx2,tune=native")

#ifdef LOCAL
#include "misc/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using db = long double;  // or db, if TL is tight
#define int ll

// pairs
#define mp make_pair
#define f first
#define s second

// vectors
#define sz(v) (int)((v).size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;

    vector<int> seen(n + 1);
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        seen[x] = true;
    }

    int res = 0;
    for (int i = 1; i <= n; i++)
        res += !seen[i];

    cout << res << "\n";
}