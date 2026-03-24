#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double AP, PB, PC; cin >> AP >> PB >> PC;
    double AB = AP + PB;
    double AC = sqrt(AP*AP + PC*PC);
    double BC = sqrt(PB*PB + PC*PC);
    double area = 0.5 * AB * PC;
    double perimeter = AB + AC + BC;
    cout << fixed << setprecision(9) << area << " " << perimeter << endl;
    return 0;
}