#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define ln '\n'
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

ll mod_bien(ll x, ll mod) {
  while (x < 0 || x > mod) {
    if (x < 0) x += mod;
    if (x > mod) x -= mod;
  }
  return x;
}
char algo(char c, int& mov) {
  if (c == ' ') { return ' '; }
  mov = mod_bien(mov, 26);

  return mod_bien(((c - 'a' - mov) % 26), 26) + 'a';
}
void solve() {
  int n, k;
  cin >> n >> k;
  map<char, int> m;
  int cont = 0;
  string s;
  getline(cin, s);
  getline(cin, s);

  for (auto c : s) {
    // cout << "CONT BE: " << cont << ln;
    // for (auto x : m) { cout << x.first << ':' << x.second << ' '; }
    // cout << ln;
    char t = algo(c, cont);
    cout << t;
    m[t]++;
    if (t != ' ' && m[t] % k == 0) cont++;
    // cout << cont << ln;
  }
  cout << ln;
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