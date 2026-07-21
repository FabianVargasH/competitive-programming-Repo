#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
#define pb push_back
#define nl '\n'
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef pair<int,ll> pil;


ll a, b, c;
const ll INFINITO = 2e18;
ll lcm(ll x, ll y) {
    ll g = __gcd(x, y);
    x = x / g; 
    if (x > INFINITO / y) return INFINITO;
    return x * y;
}
ll contarDivisibles(ll n) {
    ll porA = n / a;
    ll porB = n / b;
    ll porC = n / c;
    ll porAyB = n / lcm(a, b);
    ll porAyC = n / lcm(a, c);
    ll porByC = n / lcm(b, c);
    ll porABC = n / lcm(lcm(a, b), c);
    return porA + porB + porC - porAyB - porAyC - porByC + porABC;
}

ll contarNoDivisibles(ll n) {
    return n - contarDivisibles(n);
}

int main() {
    ll x;cin>>x>>a>>b>>c;
    ll izquierda = 1;
    ll derecha = INFINITO;
    while (izquierda < derecha) {
        ll medio = izquierda + (derecha - izquierda) / 2;
        if (contarNoDivisibles(medio) >= x) {
            derecha = medio;
        } else {
            izquierda = medio + 1;
        }
    }
    cout <<izquierda<<nl;
    return 0;
}
