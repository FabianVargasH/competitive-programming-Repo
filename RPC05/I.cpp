#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ln '\n'
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using vc = vector<char>;
pii first = {0, 0};
bool validate(vector<vc>& v, pii x) {
  auto [r, c] = x;

  return v[r + 1][c] == 'O' && v[r + 1][c - 1] == 'O' && v[r + 1][c + 1] == 'O' && v[r][c + 1] == 'O' && v[r - 1][c + 1] == 'O';
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int r, c;
  cin >> r >> c;
  vector<vc> I(r + 2, vc(c + 2, 'X'));
  stack<pii> esp;
  for (int i = 1; i <= r; ++i) {
    for (int j = 1; j <= c; ++j) {
      cin >> I[i][j];

      if (I[i][j] == '0') {
        if (I[i - 1][j] == 'O' && I[i][j - 1] == 'O' && I[i - 1][j - 1] == 'O') { esp.push({i, j}); }
      }
    }
  }
  ll contador = 0;
  while (!esp.empty()) {
    pii x = esp.top();
    // cout << "DEBUG: " << x.first << ' ' << x.second << ln;
    esp.pop();
    if (validate(I, x)) {
      contador++;
      first = x;
    }
  }
  if (contador == 0) {
    cout << "Oh no!" << ln;

  } else if (contador == 1) {
    cout << first.first << ' ' << first.second << ln;
  } else {
    cout << "Oh no! " << contador << " locations" << ln;
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