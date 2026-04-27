#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 

int main(){
    ll n;char x;
    cin>>n;
    string a;
    getline(cin,a);
    while(n--){
        getline(cin,a);
        a+='\n';
        string x={};
        for(int i=0;i<a.size();i++){
            if(a[i]==' ' || a[i]=='\n'){
                ll r=0;
                for(auto u : x){
                    if(u=='0')r++;
                    else      r=0;
                    if('0'<=u && u<='9');
                    else{r=-1;break;}
                }
                if(r<4)cout<<x;
                else{   
                    if(r+1==x.size() && x[0]=='1'){
                        cout<<"10^{"<<r<<"}";
                    }
                    else{
                        cout<<x[0];
                        if(x.size()-r>1)cout<<".";
                        for(int j=1;j+r<x.size();j++){
                            cout<<x[j];
                        }
                        cout<<"\\cdot10^{"<<x.size()-1<<"}";
                    }
                }
                x={};cout<<a[i];
            }
            else x+=a[i];
        }
    }
return 0;
}
