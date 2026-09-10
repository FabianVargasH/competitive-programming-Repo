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

bool vocal(char c){
    return c == 'a' || c== 'e' || c == 'i' || c== 'o' || c == 'u';
}

int main(){
    fast_io;
    string s; cin>>s;
    string c,v = "";

    for(int i = 0; i< (int)s.size();i++){
        if(vocal(s[i])){
            v += s[i];
        }else c +=s[i];
    }
    cout<<c<<nl;
    cout<<v<<nl;
    return 0;
}