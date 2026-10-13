#include <bits/stdc++.h>

#include <iostream>

using namespace std;
using ll = long long;
#define ln '\n'
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
double calc_V(double r, double R, double h) { return M_PI * h * (R * R + r * r + R * r) * (double)(1) / 3; }
double calc_R_mov(double h, double h_new, double R, double r) { return r + (R - r) * (h_new / h); }
double bin_s(double target, double r, double R, double h) {
  double low = 0.0;
  double high = 10.0;

  for (int i = 0; i < 200; ++i) {
    double h_new = low + (high - low) / 2.0;

    double R_new = calc_R_mov(h, h_new, R, r);
    double V_new = calc_V(r, R_new, h_new);
    // cout << "COMPROBACIÓN: " << val << ' ' << target << ln;
    // cout << "ALTURA: " << mid << ln;
    // cout << "R_n-r: " << calc_R_mov(mid, r) << ln;
    // cout << target << ' ' << calc_V(r, calc_R_mov(val, val, R), val) << ln;
    // cout << V_new << " >= " << target << " Hs: " << h << ">" << h_new << ln;
    if (V_new >= target) {
      high = h_new;
    } else {
      low = h_new;
    }
  }

  return (high + low) / 2;
}

void solve() {
  double r, R, h;
  cin >> r >> R >> h;

  double V = calc_V(r, R, h);
  cout << fixed << setprecision(7);  //<< V << ln;
                                     // cout << calc_R_mov(8.8, 6, 3.8) << ln;
  //  cout << calc_V(2.5, calc_R_mov(8.8, 5.27, 3.8), 5.27) << ln;
  //   cout << calc_R_mov(h, h, R) << ln;
  double val = bin_s(V / 2, r, R, h);
  cout << val << ln;
  //  cout << V / 2 << ' ' << calc_V(r, calc_R_mov(val, val, R), val);
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