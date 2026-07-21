#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
#define pb push_back
#define nl '\n'
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef pair<int,ll> pil;
int main(){
    fast_io;
    int n;cin>>n;
    int mid = n/2;
    for (int i = 0; i < n; i++){
        int s = 2*(mid - abs(mid-i))+1;
        int sp = (n-s)/2;
        cout<<string(sp,' ')<<string(s,'*')<<nl;
    }
    return 0;
}

