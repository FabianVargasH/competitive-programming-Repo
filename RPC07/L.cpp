#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ln '\n'
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
void solve() {
  int n;
  cin >> n;
  vi m(50);
  for (int i = 0; i < 10 * n; i++) {
    for (int j = 0; j < 5; j++) {
      int x;
      cin >> x;
      m[x - 1]++;
    }
  }
  vi m2;
  for (int i = 0; i < 50; i++) {
    if (m[i] > 2 * n) { m2.push_back(i + 1); }
  }

  if (m2.size() == 0) {
    cout << -1 << ln;
    return;
  }

  for (int i = 0; i < m2.size(); i++) {
    if (i == m2.size() - 1) {
      cout << m2[i] << ln;
    } else {
      cout << m2[i] << ' ';
    }
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}
/*
int t;cin >> t;
while (t--)


*/