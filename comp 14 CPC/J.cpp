#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> distancias(n);
    for (int i = 0; i < n; i++) {
        cin >> distancias[i];
    }
    int minDist = distancias[0];
    for (int a = 1; a <= minDist / 3; a++) {
        for (int b = a; b <= 1000; b++) {
            for (int c = b; c <= 1000; c++) {
                set<int> posibles;
                posibles.insert(a + a + a);
                posibles.insert(a + a + b);
                posibles.insert(a + a + c);
                posibles.insert(a + b + b);
                posibles.insert(a + b + c);
                posibles.insert(a + c + c);
                posibles.insert(b + b + b);
                posibles.insert(b + b + c);
                posibles.insert(b + c + c);
                posibles.insert(c + c + c);
                bool valido = true;
                for (int d : distancias) {
                    if (posibles.find(d) == posibles.end()) {
                        valido = false;
                        break;
                    }
                }
                if (valido) {
                    cout << a << " " << b << " " << c << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}