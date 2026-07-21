#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

void bZ(int r, vector<int>& A) {
    if (r == 0) { A[0] = 0; return; }
    int pw = 1;
    while (pw * 2 <= r) pw *= 2;
    if((ll)r + 1 == 2LL * pw) {
        for (int i = 0; i <= r; i++) A[i] = r - i;
        return;
    }
    int m = r - pw + 1; 
    for (int i = 0; i < pw; i++) A[i] = (pw - 1) - i;          
    for (int ip = 0; ip < m; ip++) A[pw + ip] = (pw - 1) - ip; 
    vector<int> sub(m);
    bZ(m - 1, sub);             
    for (int ip = 0; ip < m; ip++)
        A[ip] = pw + sub[ip];              
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        int l, r;cin>>l>>r; 
        int n = r - l + 1;
        vector<int>A(n);
        bZ(r, A);
        ll S = (ll)r *(r + 1)/2;
        ll maxSum = 2 * S;
        cout << maxSum << nl;
        for (int i = 0; i<n; i++) {
            if (i) cout <<' ';
            cout << A[i];
        }
        cout <<nl;
    }
    return 0;
}