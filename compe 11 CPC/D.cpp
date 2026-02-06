#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);    

int main(){
    fast_io;
    string s; 
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    int letras[26];
    for(int i = 0; i < 26; i++){
        letras[i] = 0;
    }
    
    for(int i = 0; i < s.length(); i++){
        int posicion = s[i] - 'a';
        letras[posicion]++;
    }
    int impares = 0;
    for(int i = 0; i < 26; i++){
        if(letras[i] % 2 == 1){
            impares++;
        }
    }
    if(impares <= 1){
        cout << "YES" << nl;
    } else {
        cout << "NO" << nl;
    }
    
    return 0;
}