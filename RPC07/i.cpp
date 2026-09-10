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
    int n, m; cin>>n>>m;
    vector<vi> adj(n + 1);
    vector<pii> edges(m);
    for(int i = 0; i < m; i++){
        int a, b;cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
        edges[i] = {a, b};
        /*cout <<"arista "<<i<<":"<<a<<" - "<< b<<nl;*/
    }
    /*
    for(int i = 1; i <= n; i++){
        cout<<i<< ": ";
        for(int v : adj[i]) cout<<v<< " ";
        cout<<nl;
    }
    */
    vi dist1(n + 1, -1);
    dist1[1] = 0;
    queue<int> q1;
    q1.push(1);
    while(!q1.empty()){
        int u = q1.front(); q1.pop();
        /*cout << "proce nodo " <<u<< " dist1=" <<dist1[u]<< nl;*/
        for(int v : adj[u]){
            if(dist1[v] == -1){
                dist1[v] = dist1[u] + 1;
                q1.push(v);
                /*cout<<"descubierto"<<v<<"dist1="<<dist1[v]<<nl;*/
            }
        }
    }
    /*
    for(int i = 1; i <= n; i++){
        cout<<"dist1[" <<i<< "] = "<<dist1[i]<<nl;
    }
    */

    vi distn(n + 1, -1);
    distn[n] = 0;
    queue<int> q2;
    q2.push(n);
    while(!q2.empty()){
        int u = q2.front(); q2.pop();
        /*cout << "proce nodo " <<u<< " distn=" <<distn[u]<< nl;*/
        for(int v : adj[u]){
            if(distn[v] == -1){
                distn[v] = distn[u] + 1;
                q2.push(v);
                /*cout<<"descubierto"<<v<<"distn="<<distn[v]<<nl;*/
            }
        }
    }
    /*
    for(int i = 1; i <= n; i++){
        cout<<"distn[" <<i<< "] = "<<distn[i]<<nl;
    }
    */

    int L = dist1[n];
    /*cout<<"L = "<<L<<nl;*/

    bool possible = false;
    for(int i = 0; i < m; i++){
        int a = edges[i].first, b = edges[i].second;
        /*cout <<"chequeando "<<a<< "-"<<b<< " dist1="<<dist1[a]<<","<<dist1[b]<<" distn="<<distn[a]<<","<<distn[b]<<nl;*/
        if(dist1[a] != -1 && distn[b] != -1 && dist1[a] + distn[b] == L){
            possible = true;
            /*cout <<"match en arista "<<a<< "-" <<b<< nl;*/
            break;
        }
        if(dist1[b] != -1 && distn[a] != -1 && dist1[b] + distn[a] == L){
            possible = true;
            /*cout <<"match en arista "<<a<< "-" <<b<< nl;*/
            break;
        }
    }
    /*cout <<"possible =" <<possible<< nl;*/

    if(possible) cout<<"possible"<<nl;
    else cout<<"impossible"<<nl;
    return 0;
}