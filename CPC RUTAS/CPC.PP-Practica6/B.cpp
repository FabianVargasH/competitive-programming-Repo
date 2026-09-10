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

string anan(string a, string b){
    if(a.size() != b.size()) return "NO";
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a==b){
        return "YES";
    }else return "NO";
}

int main(){
    fast_io;
    string a; cin>>a;
    string b; cin>>b;
    cout<<anan(a,b)<<nl;

    return 0;
}