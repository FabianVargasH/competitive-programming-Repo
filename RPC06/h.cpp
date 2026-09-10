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

string tl(const string &s){
    string result = s;
    for(char &c : result){
        c = tolower((unsigned char)c);
    }
    return result;
}

vs sbp(const string &line){
    vs tokens;
    string current;
    for(char c : line){
        if(c == '!'){
            tokens.pb(current);
            current.clear();
        } else {
            current += c;
        }
    }
    tokens.pb(current);
    return tokens;
}

int main(){
    fast_io;
    string line;
    getline(cin, line);
    vs tokens = sbp(line);
    /* cout << "Cant tokens: " << tokens.size() << nl;
    for(int i = 0; i < (int)tokens.size(); i++){
        cout << "  token[" << i << "] = '" << tokens[i] << "'" << nl;
    } */
    if(tokens.size() == 1){
        cout << tokens[0] << nl;
        return 0;
    }
    string username = tokens.back();
    vs machineNames(tokens.begin(), tokens.end() - 1);
    vs path;
    for(const string &machine : machineNames){
        string mLower = tl(machine);
        bool mt = (!path.empty() && tl(path.back()) == mLower);
        bool ms = (!mt && path.size() >= 2 && tl(path[path.size()-2]) == mLower);
        /*bool mt = (!path.empty() || tl(path.back()) == mLower);
        bool ms = (!mt || path.size() >= 2 || tl(path[path.size()-2]) == mLower); */
        /* cout << "Proc: "<< machine << " | mt=" << mt << " | ms=" << ms << " | path antes = "; for(auto&m:path) cout<<m<<" "; cout<<nl; */
        if(mt){
            continue;
        } else if(ms){
            path.pop_back();
        } else {
            path.pb(machine);
        }
        /* cout << "path despues = "; for(auto&m:path) cout<<m<<" "; cout<<nl; */
    }
    string result;
    for(const string &machine : path){
        result += machine + "!";
    }
    result+=username;
    cout <<result<< nl;
    return 0;
}