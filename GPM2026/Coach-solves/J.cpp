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

const int MX = 1e6, MOD = 1e9 + 7;

int dp[MX + 1];

int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	dp[0] = 0, dp[1] = 0, dp[2] = 0, dp[3] = 1;
	for (int i = 4; i <= MX; i++) {
		dp[i] = dp[i - 1];
		if (i % 2 == 0) {
			int e = (i - 1) / 2;
			int ways = (e * (e - 1) / 2) % MOD;
			
			dp[i] = (dp[i] + ways) % MOD;
			
			int o = (i - 1) - e;
			ways = (o * (o - 1) / 2) % MOD;

			dp[i] = (dp[i] + ways) % MOD;
		} else {
			int e = (i - 1) / 2;
			int o = (i - 1) - e;
			
			int ways = e * o % MOD;
			
			dp[i] = (dp[i] + ways) % MOD;			
		}
	} 
	
	int tc; cin >> tc;

	while (tc--) {
		int n; cin >> n;
		cout << dp[n] << "\n";
	}
}