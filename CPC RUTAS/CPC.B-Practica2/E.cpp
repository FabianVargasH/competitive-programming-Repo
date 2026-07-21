#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define nl '\n'

int main(){
    fast_io;
    int n, k;cin>>n>>k;
    vi a(n);
    for (int i = 0; i < n; i++)cin>>a[i];
    int threshold = a[k - 1];
    int count = 0;
    for (int i = 0; i < n; i++){
        if (a[i] >= threshold && a[i] > 0) count++;
    }
    cout<<count<<nl;
    return 0;
}