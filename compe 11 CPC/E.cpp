#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string fila1, fila2;
    getline(cin, fila1); 
    getline(cin, fila2);
    string resultado = "";
    int i = 0;
    while(i < n){
        if(fila1[i] == '.' && fila2[i] == '.'){
            i++;
            continue;
        }
        string patron = "";
        while(i < n && !(fila1[i] == '.' && fila2[i] == '.')){
            patron += fila1[i];
            patron += fila2[i];
            i++;
        }
        int longitud = patron.size();
        if(longitud == 4){
            if(patron == "\\./../.\\/"){
                resultado += 'v';
            }
        }
        else if(longitud == 8){
            if(patron == "\\../.\\../../\\/...\\\/."){
                resultado += 'w';
            }
        }
    }
    cout << resultado << nl;
    return 0;
}