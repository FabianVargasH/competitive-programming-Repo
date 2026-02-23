#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string S;
    cin >> S;

    int score = 0;
    int i = 0;

    while (i < S.size()) {
        if (S.substr(i, 5) == "bravo") {
            score += 3;
            i += 5;
        } else if (S.substr(i, 5) == "boooo") {
            score -= 1;
            i += 5;
        } else if (S.substr(i, 2) == "ha") {
            score += 1;
            i += 2;
        } else {
            i++;
        }
    }

    cout << score << "\n";
    return 0;
}


