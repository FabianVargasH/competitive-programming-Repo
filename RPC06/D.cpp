#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define ln '\n'
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}
void solve() {
  int n, n2;
  cin >> n;
  n2 = n * n;

  int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
  // Hipotenusa
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j++) {
      int t = i * i + j * j;

      if (t > n2) break;
      if (t == n2) {
        // cout << i << "² + " << j << "² = " << n2 << ln;
        if (gcd(n, gcd(j, i)) > 1) {
          cnt2++;
        } else {
          cnt1++;
        }
      }
    }
  }
  // Cateto

  if (n % 2 == 1) {  // impar
    for (int i = 1; i * i <= n2; i += 2) {
      if (n2 % i == 0) {
        int u = i;              // y-x
        int v = n2 / i;         // y+x
        int hip = (u + v) / 2;  // y
        int cat = (v - u) / 2;  // x

        if (cat * cat + n2 == hip * hip && cat > 0 && hip > 0) {
          // cout << cat << "² + " << n << "² = " << hip << "²" << ln;
          if (gcd(hip, cat) > 1) {
            cnt4++;
          } else
            cnt3++;
        }
      }
    }
  } else {
    for (int i = 1; i * i <= n2; i++) {
      if (n2 % i == 0) {
        int u = i;              // y-x
        int v = n2 / i;         // y+x
        int hip = (u + v) / 2;  // y
        int cat = (v - u) / 2;  // x

        if (cat * cat + n2 == hip * hip && cat > 0 && hip > 0) {
          // cout << cat << "² + " << n << "² = " << hip << "²" << ln;
          if (gcd(cat, hip) > 1) {
            cnt4++;
          } else
            cnt3++;
        }
      }
    }
  }

  cout << cnt1 << " " << cnt2 << " " << cnt3 << " " << cnt4 << ln;
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