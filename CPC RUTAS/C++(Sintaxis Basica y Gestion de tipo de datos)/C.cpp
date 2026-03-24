#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n';

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    map<char ,int> grades = {
        {'A', 4},
        {'B', 3},
        {'C', 2},
        {'D',1},
        {'F', 0}
    };
    char c; cin>>c;
    cout<<grades[c]<<nl;
    return 0;
}

