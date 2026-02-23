/* You have to implement a queue with two operations:

"+ x" — add an element x
 to the queue;
"-" — retrieve an element from the queue.
For each retrieval operation, print the result of the operation. It is guaranteed that there always exists an element to retrieve from the queue.

Input
The first line of the input contains a single integer n
 (1≤n≤3⋅10^5) — the number of operations.

The next n
 lines describe n
 operations, one per line. The added element cannot exceed 10^9
.

Output
Print the results of all retrieval operations in the corresponding order, one per line. */


#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define nl '\n' 

int main(){
    fast_io;
    int n =0; cin>>n;
    queue<int>cola;
    while(n--){
        char operation;
        cin>>operation;
        if(operation == '+'){
            int x = 0; cin>>x;
            cola.push(x);
        }else if(operation == '-'){
            cout<<cola.front()<<nl;
            cola.pop();
        }
    }
    return 0;
}

