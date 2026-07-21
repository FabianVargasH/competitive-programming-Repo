#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ln '\n'
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

int GCD(int a, int b) {
  if (b == 0) return a;
  return GCD(b, a % b);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string n;

  cin >> n;
  ll total = 0;

  // vi a(n.length());
  queue<pii> s1, s2;
  // total += n[0] - '0';
  // if (n.length() % 2 == 1) n = n + "0";
  for (int i = 0; i < n.length() - 1; ++i) {
    s1.push({n[i] - '0', n[i + 1] - '0'});

    total += n[i] - '0';
  }
  total += n[n.length() - 1] - '0';
  // while (!s1.empty()) {
  //   auto [x2, y2] = s1.front();
  //   s1.pop();
  //   cout << '(' << x2 << ',' << y2 << ')' << ln;
  // }

  for (int i = n.length() - 1; i >= 1; --i) {
    while (!s1.empty()) {
      if (s1.size() >= 2) {
        auto [x1, y1] = s1.front();
        s1.pop();
        auto [x2, y2] = s1.front();
        // cout << '(' << x1 << ',' << y1 << ')' << ' ' << '(' << x2 << ',' << y2 << ')' << ln;
        int max1 = 0, max2 = 0;
        if (x1 > y1) {
          max1 = x1;
        } else {
          max1 = y1;
        }
        if (x2 > y2) {
          max2 = x2;
        } else {
          max2 = y2;
        }
        // cout << max1 << ' ' << max2 << ln;
        total += max1;
        s2.push({max1, max2});
      } else {
        auto [x1, y1] = s1.front();
        s1.pop();
        // cout << '(' << x1 << ',' << y1 << ')' << ln;
        total += max(x1, y1);
      }
    }
    swap(s1, s2);
  }
  /*
  while (!s1.empty()) {
      auto [x2, y2] = s1.front();
      s1.pop();
      cout << '(' << x2 << ',' << y2 << ')' << ln;
    }
    cout << total << ln;
    return 0;*/

  ll jk = (ll)n.length() * ((ll)n.length() + 1LL) / 2;
  // cout << total << ' ' << jk << ln;

  if (total % jk == 0)
    cout << total / jk << ' ' << ln;
  else {
    ll factor = GCD(total % jk, jk);
    if (total / jk > 0)
      cout << total / jk << ' ' << (total % jk) / factor << '/' << jk / factor << ln;
    else
      cout << (total % jk) / factor << '/' << jk / factor << ln;
  }

  return 0;
}

/*
int t;
cin>>t;

while(t--){
}

for (int _ = 0; _<t;_++){
}
*/