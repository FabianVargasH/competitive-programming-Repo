#include <bits/stdc++.h>
using namespace std;
#define nl '\n' 
using ll = long long;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
    fast_io;
    int n;
    cin >> n;
    map<int, int> frecuencia;
    for (int i = 0; i < 10 * n; i++) {
        for (int j = 0; j < 5; j++) {
            int num;
            cin >> num;
            frecuencia[num]++;
        }
    }
    int umbral = 2 * n;
    vector<int> sospechosos;
    for (auto& par : frecuencia) {
        if (par.second > umbral) {
            sospechosos.push_back(par.first);
        }
    }
    if (sospechosos.empty()) {
        cout << -1 << endl;
    } else {
        sort(sospechosos.begin(), sospechosos.end());
        for (int i = 0; i < sospechosos.size(); i++) {
            if (i > 0) cout << " ";
            cout << sospechosos[i];
        }
        cout << endl;
    }
    return 0;
}