#include <bits/stdc++.h>
using namespace std;
#define nl '\n' 
using ll = long long;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
    fast_io;
    int n, r, c;
    cin >> n >> r >> c;
    r--;
    c--;
    int center = n / 2;
    int dist = max(abs(r - center), abs(c - center));
    int score = max(0, 100 - dist * 10);
    cout << score << endl;
    
    return 0;
}
