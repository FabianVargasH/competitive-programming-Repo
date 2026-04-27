#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ln '\n'
#define vi vector<int>
#define vll vector<ll>
ll MOD = 1e9 + 7;

/*ll n_C_k(ll n, ll k) { // Ante la duda esto es muy lento, se puede simplificar
y sacar en O(1) k = min(k, n - k); ll res = 1; for (int i = 1; i < k + 1; i++)  res = res * (n - i + 1) / i;
    return res;
}*/

ll res(ll y) {
    if (y % 2 == 0) {
        // si n es par, _ _ n => par par n || impar impar n
        // antes de n hay n/2 impares y (n-2)/2 pares
        // nCk(n/2, 2)+nCk((n-2)/2, 2) = (y-2)^2 / 4
        // Fuente: De la hispanidad
        return ((y - 2) * (y - 2) / 4) % MOD;
    }
    // si n impar, _ _ n => impar par n || par impar n
    // en realidad no nos importa el orden en el que se escogen,
    // si hubiera que dar un ejemplo solo se ordenan
    // entonces hay (n-1)/2 impares y (n-1)/2 pares
    // (n-1)^2/4
    return ((y - 1) / 2) * ((y - 1) / 2) % MOD;
}
vll precompute(int n) {
    vll table(n + 2);
    table[3] = 1;
    table[4] = 2;
    for (int i = 5; i <= n; i++) {  // básicamente se recorre desde 5 hasta n
        // las mismas combinaciones pasadas se pueden usar en la siguiente,
        // entonces solo hay que contar las combinaciones con un n fijo. Ver res
        table[i] = (table[i - 1] + res(i)) % MOD;
    }
    return table;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T; cin >> T;
    vll x = precompute(1000000);
    for (int i = 0; i < T; i++) {
        int k; cin >> k;
        cout << x[k] << ln;
    }
    return 0;
}
