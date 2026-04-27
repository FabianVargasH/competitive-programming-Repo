#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    char g;
    cin>>g;
    for(int i=0;i<n;i++) {
        string s;
        getline(cin, s);
        if(i==0){
            s = g+s;
        }
        char last = ' ';
        string line = "";
        
        
        for(int j=0;j<s.size();j++) {
            
            if(48<=(int)s[j] && (int)s[j]<=57 && last!='{' && last == ' ') {
                string num ="";
                int x = j;
                while(48<=s[x] && s[x]<=57 && x<s.size()) {
                    num += s[x];
                    x++;
                }
                
                if(x<s.size() ){
                    if(s[x] != ' '){
                        line += num;
                        j += num.size()-1;
                        
                        continue;
                    }
                }
                
                int total_ceros =0;
                for(int k=num.size()-1;k>=0;k--) {
                    if(num[k]=='0') {
                        total_ceros++;
                    }else break;
                }
                string num2 = "";
                if(total_ceros<4) {
                    line += num;
                    j += num.size()-1;
                    continue;
                }
                if(total_ceros==num.size()-1 && num[0]=='1') {
                    num2 = "10^{" + to_string(total_ceros)+'}';

                }else {
                    
                    num2=+num[0];
                    if(total_ceros!=num.size()-1)
                    num2+='.';
                    for(int k=1;k<num.size()-total_ceros;k++)
                    num2 += num[k];
                num2+="\\cdot10^{" + to_string(num.size()-1)+'}';
                }
                
                line += num2;
                j+=num.size()-1;
            } else {
                line+=s[j];
            }
            last = s[j];
    }
    cout << line <<'\n';
}
    return 0;

}