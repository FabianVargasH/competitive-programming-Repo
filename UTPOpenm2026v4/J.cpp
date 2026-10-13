#include <bits/stdc++.h>

#include <algorithm>

using namespace std;
using ll = long long;
#define ln '\n'
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
struct DSU {
  vi parent, sz;  // sz: tamaño del conjunto o rank
  DSU(int n) {
    parent.resize(n);
    sz.assign(n, 1);                        // para rank inicializar en 0
    iota(parent.begin(), parent.end(), 0);  // crea un array 0, 1, 2, 3 ..., n-1
  }
  int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
  }
  void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (a == b) return;
    if (sz[a] < sz[b]) swap(a, b);
    parent[b] = a;
    sz[a] += sz[b];  // para rank sumar 1
  }
};
void solve(int n, int p) {
  DSU dsu = DSU(n);
  int u, v;
  for (int i = 0; i < p; i++) {
    cin >> u >> v;
    dsu.unite(u - 1, v - 1);
  }

  int grupos = 0, maximo = 0;
  for (int i = 0; i < n; i++) {
    if (dsu.find(i) == i) {  // solo raíces
      grupos++;
      maximo = max(maximo, dsu.sz[i]);
    }
  }
  cout << grupos << ' ' << maximo << '\n';
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, p;
  while (cin >> n >> p) {
    if (n == 0 && p == 0) { break; }
    solve(n, p);
  }

  return 0;
}
/*
int t;cin >> t;
while (t--)

int n;cin>>n;

*/