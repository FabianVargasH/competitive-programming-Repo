#include <bits/stdc++.h>

#include <vector>

using namespace std;
using ll = long long;
#define ln '\n'
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
int R, C;
ll contar = 0;
bool valid_to_enter(vector<vector<char>>& mat, int r, int c) {
  return 0 <= r && r < mat.size() && 0 <= c && c < mat[r].size();
}

void recorrer(vector<vector<char>>& mat, int r, int c) {
  if (valid_to_enter(mat, r + 1, c) && mat[r + 1][c] == '.') {
    contar++;
    mat[r + 1][c] = '#';
    recorrer(mat, r + 1, c);
  }
  if (valid_to_enter(mat, r - 1, c) && mat[r - 1][c] == '.') {
    contar++;
    mat[r - 1][c] = '#';
    recorrer(mat, r - 1, c);
  }
  if (valid_to_enter(mat, r, c + 1) && mat[r][c + 1] == '.') {
    contar++;
    mat[r][c + 1] = '#';
    recorrer(mat, r, c + 1);
  }
  if (valid_to_enter(mat, r, c - 1) && mat[r][c - 1] == '.') {
    contar++;
    mat[r][c - 1] = '#';
    recorrer(mat, r, c - 1);
  }
}

void solve(int R, int C) {
  vector<vector<char>> mat(R, vector<char>(C, '#'));
  pii inicio = {};
  for (int i = 0; i < R; i++) {
    string s;
    cin >> s;

    for (int j = 0; j < C; j++) {
      if (s[j] == '*') {
        inicio = {i, j};
      } else if (s[j] == '.') {
        mat[i][j] = '.';
      }
    }
  }
  recorrer(mat, inicio.first, inicio.second);
  cout << contar + 1 << ln;
  contar = 0;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  while (cin >> R >> C) {
    if (R == 0 && C == 0) break;
    solve(R, C);
  }
  return 0;
}
/*



*/