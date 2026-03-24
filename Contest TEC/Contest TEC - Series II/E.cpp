#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n, m;cin>>n>>m;
        vector<ll>a(n);
        for (int i = 0; i < n; i++)cin>>a[i];
        string s;cin>>s;
        vector<int>remove(n);
        int lL = 0, rr = n-1;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == 'L'){
                remove[i] = lL++;
            }else remove[i] = rr--;
        }
        vector<ll>answ(n); ll prod = 1;
        for (int i = n - 1; i >= 0; i--){
            ll elem = a[remove[i]]%m;
            prod = (prod * elem)%m;
            answ[i] = prod;
        }
        for (int i = 0; i < n; i++){
            cout<<answ[i];
            if(i<n-1)cout<<' ';
        }
        cout<<nl;
    }
    return 0;
}