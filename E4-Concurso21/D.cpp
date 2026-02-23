#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string X, Y, S, temp1, temp2;
    cin >> X >> Y >> S;
    vector<ll> x_bases(11, 0);
    vector<ll> y_bases(11);
    for (int i = 2; i <= 10; i++) {
        int counter = X.length() - 1, real_val = 0;
        for (auto&& j : X) {
            if (j - 48 >= i) {
                real_val = -1;
                break;
            }
            real_val += (j - 48) * pow(i, counter);
            counter--;
        }
        x_bases[i] = real_val;
        counter = Y.length() - 1;
        real_val = 0;
        for (auto&& j : Y) {
            if (j - 48 >= i) {
                real_val = -1;
                break;
            }
            real_val += (j - 48) * pow(i, counter);
            counter--;
        }
        y_bases[i] = real_val;
    }
    int base1 = 0, base2 = 0;
    bool finish = false;
    for (int i = 2; i <= 10; i++) {
        if (x_bases[i] == -1) continue;
        for (int j = 2; j <= 10; j++) {
            if (y_bases[j] == -1) continue;
            if (to_string(x_bases[i] + y_bases[j]) == S) {
                base1 = i;
                base2 = j;
                finish = true;
                break;
            }
        }
        if (finish) break;
    }
    cout << base1 << ' ' << base2 << '\n';
    return 0;
}