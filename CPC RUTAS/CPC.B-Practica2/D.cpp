#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define nl '\n' 

int main(){
    fast_io;
    string s;cin>>s;
    int contadorUp = 0;
    int contadorLo = 0;
    char c = s[0];
    for(char &c : s){
        if(isupper(c)){
            contadorUp++;
            //cout<<contadorUp<<" ";
        }else if(islower(c)){
            contadorLo++; 
            //cout<<contadorUp<<" ";
        }    
    }
    if(contadorUp>contadorLo){
        for (char &c : s) {
        c = toupper(static_cast<unsigned char>(c));
        }
    }else if(contadorUp<contadorLo || contadorUp == contadorLo){
        for(char &c: s){
            c = tolower(static_cast<unsigned char>(c));
        }
    }
    cout<<s<<nl;

    return 0;
}