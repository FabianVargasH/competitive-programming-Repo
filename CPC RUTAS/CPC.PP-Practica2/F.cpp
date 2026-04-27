#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    ll a, b, c;cin >> a >> b >> c;
    ll x, y;cin >> x >> y;
    vector<ll> shelf = {a, b, c};
    vector<ll> door = {x, y};
    sort(shelf.begin(), shelf.end());
    sort(door.begin(), door.end());
    bool canPass = false;
    if(shelf[0] <= door[0] && shelf[1] <= door[1])canPass = true;
    if(shelf[0] <= door[0] && shelf[2] <= door[1])canPass = true;
    if(shelf[1] <= door[0] && shelf[2] <= door[1])canPass = true;
    if(canPass){
        cout << "YES" << nl;
    } else {
        cout << "NO" << nl;
    }
    
    return 0;
}