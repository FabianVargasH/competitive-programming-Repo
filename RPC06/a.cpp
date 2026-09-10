#include <bits/stdc++.h>
using namespace std;

// h1 number of bags 1 through the hole
// b1 number of bags 1 got on the board
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a1, b1; cin >> a1 >> b1;
    int a2, b2; cin >> a2 >> b2;

    int totalBags1 = (a1*3)+(b1*1);
    int totalBags2 = (a2*3)+(b2*1);

    if(totalBags1 > totalBags2) {
        cout << 1 << " " << totalBags1 - totalBags2 << "\n";
    } else if(totalBags1 < totalBags2) {
        cout << 2 << " " << totalBags2 - totalBags1 << "\n";
    } else {
        cout << "NO SCORE" << "\n";
    }
}