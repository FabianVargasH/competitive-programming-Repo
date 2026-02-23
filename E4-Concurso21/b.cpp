#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int age1, salary1; cin >> age1 >> salary1;
    int age2, salary2; cin >> age2 >> salary2;
    int life; cin >> life;

    age1 = life - age1;
    age2 = life - age2;

    if((age1*salary1) > (age2*salary2)) {
        cout << 1 << "\n";
    } else if ((age1*salary1) == (age2*salary2)) {
        cout << 1 << "\n";
    } else if((age1*salary1) < (age2*salary2)) {
        cout << 2 << "\n";
    }

}