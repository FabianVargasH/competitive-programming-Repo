#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ln '\n'
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
void solve(int n) {
  vi a(n);
  int floor = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    floor = max(floor, a[i]);
  }
  vi b(n + 2);
  for (int i = 0; i < n; i++) { b[i + 1] = floor - a[i]; }
  // for (auto x : b) { cout << x << ' '; }
  // cout << ln;
 
  int l = 0, r = n + 1, max_l = b[l], max_r = b[r];
  ll count = 0;
  while (l < r) {
    if (max_l < max_r) {
      // mover l
      l++;
      max_l = max(max_l, b[l]);
      count += max_l - b[l];
    } else {
      r--;
      max_r = max(max_r, b[r]);
      count += max_r - b[r];
    }
  }
 
  cout << count << ln;
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