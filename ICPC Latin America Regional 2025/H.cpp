#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define nl '\n' 

int main() {
    int N;
    cin >> N;
    
    vector<int> dificultades(N);
    for (int i = 0; i < N; ++i) {
        cin >> dificultades[i];
    }

    int dias = 1;  
    int max_actual = dificultades[0];  

    for (int i = 1; i < N; ++i) {
        if (dificultades[i] > max_actual) {
            dias++;
            max_actual = dificultades[i];
        }
    }

    cout << dias << endl;
    return 0;
}


