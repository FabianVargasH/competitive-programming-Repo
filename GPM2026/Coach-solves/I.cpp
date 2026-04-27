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

	vector<int> a(n + 1);
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	string s; cin >> s;

	vector<int> cnt = {0};
	vector<int> comp = {0};

	for (int i = 1; i <= n; i++) {
		int j = i, sum = 0;
		while (true) {
			sum += a[j];
			if (j == n || s[j - 1] != '=') break;
			j++;
		}
		cnt.push_back(j - i + 1);
		comp.push_back(sum);
		i = j;
	}

	string t;
	for (int i = 0; i < n - 1; i++)
		if (s[i] != '=') t.push_back(s[i]);

	vector<int> dp1(sz(comp) + 1), dp2(sz(comp) + 1);
	
	for (int i = 2; i < sz(comp); i++) {
		if (t[i - 2] == '<') dp1[i] = dp1[i - 1] + 1;
		else dp1[i] = 0;
	}

	for (int i = sz(comp) - 2; i >= 1; i--) {
		if (t[i - 1] == '>') dp2[i] = dp2[i + 1] + 1;
		else dp2[i] = 0;
	}
	
	// debug(dp1, dp2);

	int res = 0;
	
	vector<int> b = {0};
	for (int i = 1; i < sz(comp); i++) {
		int cur = max(dp1[i], dp2[i]) + 1;
		res += comp[i] * cur;
		while (cnt[i]--) b.push_back(cur);
	}

	cout << res << "\n";
	
	for (int i = 1; i <= n; i++)
		cout << b[i] << " \n"[i == n];
}