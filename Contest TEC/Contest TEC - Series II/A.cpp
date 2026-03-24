#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int sum = (n/10)+(n%10);
        cout<<sum<<nl;
    }
    return 0;
}