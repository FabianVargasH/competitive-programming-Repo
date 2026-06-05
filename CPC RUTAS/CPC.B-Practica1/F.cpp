#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fast_io;
    int n;cin >> n;
    vector<int> v;
    for(int i = 1; i <= n; i++) v.push_back(i);
    do {
        for(int x : v)
            cout << x << ' ';
        cout <<nl;
    } while(next_permutation(v.begin(), v.end()));
    return 0;
}