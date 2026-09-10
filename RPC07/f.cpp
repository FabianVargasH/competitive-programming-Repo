#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    long long t; cin >> t;
    bool ok = true;
    map<string, int> dic;
    long long values = 0;
    while(t--) {
        string f, s; cin >> f >> s;
        if(f == "pickup") {
            if(dic.find(s)!=dic.end()) {
                ok = false;
            }else{
                dic[s] = 1;
                values++;
            }
        } else {
            if(dic[s] == 1) {
                dic[s] = 0;
                values--;
            } else {
                cout << "no" << "\n";
                return 0;
            }
        }
    }

    if(ok && values == 0) {
        cout << "yes" << "\n";
    } else {
        cout << "no" << "\n";
    }
}