#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ln '\n'
#define vi vector<int>
#define vll vector<ll>

void factor(int n, vi& f) {
    int i = 0;
    for (int k = 2; k <= n; k++) {
        while (n % k == 0) {
            f[i] = k;
            n /= k;
            i++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, Q;
    cin >> N >> Q;
    // log_2(10^6) = 19.93..., como 2 es el factor más pequeño posible es el que
    // se puede spamear más, pero no más de 20 veces en este caso
    vector<pair<vi, int>> table(Q, {vi(20), 0});
    for (int i = 0; i < Q; i++) {
        int t;
        cin >> t;
        factor(t, table[i].first);
        table[i].second = t;
    }

    sort(table.begin(), table.end(), [](pair<vi, int> a, pair<vi, int> b) {
        for (int i = 0; i < 20; i++) {
            if (a.first[i] == b.first[i])
                continue;  // si son iguales los ignora
            return a.first[i] <
                   b.first[i];  // si son distintos verifica cual es el mayor
        }
        return a.first[19] < b.first[19];  // para que el compilador no se queje
    });
    for (auto&& i : table) {
        /*for (auto&& c : i.first) {
            cout << c << ' ';
        }
        cout << ln;*/
        cout << i.second << ln;
    }
    return 0;
}
