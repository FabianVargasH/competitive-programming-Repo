#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fast_io;
    ll n;cin>>n;
    int mid = n / 2;
    int start= pow(10, mid - 1);
    int end=pow(10, mid)-1;
    for (int i = start; i <= end; i++) {
        string left=to_string(i);
        string right=left;
        reverse(right.begin(),right.end());
        cout<<left+right<<nl;
    }
    return 0;
}