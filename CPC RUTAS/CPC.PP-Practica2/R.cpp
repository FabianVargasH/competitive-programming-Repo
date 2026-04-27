#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fast_io;
    ll y, x;cin >> y >> x;
    ll k = max(y, x);
    ll result = (k - 1) * (k - 1);  
    if (y == 1) {
        // Lado de la fila superior
        if (k % 2 == 1) {
            // k impar
            result += 2 * k - 1;
        } else {
            // k par
            result += 1;
        }
    }
    else if (x == k) {
        // columna derecha
        if (k % 2 == 1) {
            // k impar
            result += 2 * k - y;
        } else {
            // k par
            result += y;
        }
    }
    else {
        //y == k y x < k
        if (k % 2 == 1) {
            //k impar incrementa de izquierda a derecha
            result += x;
        } else {
            //k par decrementa de derecha a izquierda
            result += 2 * k - x;
        }
    }
    cout << result << nl;
    return 0;
}