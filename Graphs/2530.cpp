#include<bits/stdc++.h>
using namespace std;

typedef long long intt;

int minimal_steps(vector<vector<int>> &graph, int node, int scolor, vector<int> &desired){
    if(scolor == desired[node]){
        int ans = 0;
        for(int v : graph[node]){
            ans += minimal_steps(graph, v, scolor, desired);
        }
        return ans;
    } else {
        int ans = 1;
        for(int v : graph[node]){
            ans += minimal_steps(graph, v, desired[node], desired);
        }
        return ans;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<vector<int> > graph(n, vector<int>());
    for(int i = 0; i < n-1; ++i){
        int p_i; cin >> p_i;
        p_i--;
        // edge p_i --> i+1
        graph[p_i].push_back(i+1);
    }
    vector<int> desired(n);
    for(int i = 0; i < n; ++i){
        cin >> desired[i];
    }

    cout << minimal_steps(graph, 0, 0, desired) << endl;

    return 0;
}