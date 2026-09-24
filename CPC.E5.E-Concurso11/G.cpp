
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ln '\n'
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
void solve(int n) {
  bool ace = false, two = false;
  int m = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    m = max(x, m);
    if (x == 1) {
      ace = true;
    } else if (x == 2) {
      two = true;
    }
  }
 
  if (two) {
    cout << 2 << ln;
  } else if (ace) {
    cout << 1 << ln;
  } else {
    cout << m << ln;
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
 
  while (true) {
    int n;
    cin >> n;
    if (n == 0) break;
    solve(n);
  }
  return 0;
}