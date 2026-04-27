#include <bits/stdc++.h>
using namespace std;
#define nl '\n' 

int main() {
    int c;cin >> c;
    vector<long long> v(c);
    for (int i = 0; i < c; i++) cin >> v[i];
    int first = max_element(v.begin(), v.end()) - v.begin();
    int second = -1;
    for (int i = 0; i < c; i++) {
        if (i != first && (second == -1 || v[i] > v[second])) {
            second = i;
        }
    }
    if (second == -1) {
        cout << "IMPOSSIBLE TO WIN"<<nl;
        return 0;
    }
    long long myVotes = v[second];
    vector<long long> others;
    for (int i = 0; i < c; i++) {
        if (i != second) others.push_back(v[i]);
    }
    int rounds = 0;
    while (true) {
        long long total = myVotes;
        for (long long x : others) total += x;
        if (myVotes * 2 > total) {
            cout << rounds << "\n";
            return 0;
        }
        if (others.size() == 1) {
            if ((myVotes + others[0]) * 2 > (myVotes + others[0])) {
                cout << rounds + 1 << "\n";
            } else {
                cout <<"IMPOSSIBLE TO WIN"<<nl;
            }
            return 0;
        }
        int minPos = 0;
        for (int i = 1; i < (int)others.size(); i++) {
            if (others[i] < others[minPos]) minPos = i;
        }
        myVotes += others[minPos];
        others[minPos] = others.back();
        others.pop_back();
        rounds++;
    }
    return 0;
}

    /*
    int p = 0, s = 0;
    for (int i = 1; i < c; i++) {
        if (v[i] > v[p]) {
            s = p;
            p = i;
        } else if (v[i] > v[s]) {
            s = i;
        }
    }
    long long mv = v[s];
    */