#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ln '\n'
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
const ll MOD = 1000000007;

ll mod_pow(ll base, ll exp, ll mod) {
  ll res = 1 % mod;
  base %= mod;
  while (exp > 0) {
    if (exp & 1) res = res * base % mod;
    base = base * base % mod;
    exp >>= 1;
  }
  return res;
}

ll nCk(ll n, ll k) {
  if (k < 0 || k > n) return 0;
  k = min(k, n - k);

  ll res = 1;
  for (ll i = 1; i <= k; ++i) {
    res = res * ((n - k + i) % MOD) % MOD;
    res = res * mod_pow(i, MOD - 2, MOD) % MOD;
  }
  return res;
}
void solve() {
  ll n;
  cin >> n;
  cout << nCk(n, 3) << ln;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
/*


int n;cin>>n;
for (int i = 0; i<n;i++){
}
*/