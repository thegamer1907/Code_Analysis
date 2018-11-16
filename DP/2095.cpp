#include <bits/stdc++.h>

using namespace std;

int main() {
    //ifstream cin("in");
    //ofstream cout("out");

    int n, t;
    cin >> n >> t;
    vector<int> A(n, 0);
    for(int i = 0; i < n; i++) cin >> A[i];
    vector<int> dist(n, 0);
    set<int> S;
    int D = 0;
    for(int i = n-1; i >= 0; i--){
        if(S.find(A[i]) == S.end()){
            D++;
            S.insert(A[i]);
        }
        dist[i] = D;
    }

    while(t--){
        int temp;
        cin >> temp;
        cout << dist[temp-1] << endl;
    }

    return 0;
}