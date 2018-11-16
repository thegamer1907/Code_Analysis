#include <bits/stdc++.h>
using namespace std;

class vertex {
public:
    vector<int> adj;
    int visited;
    vertex() {
        visited = 0;
    }
};

void dfs(int src, vertex* city) {
    if (!city[src].visited) {
        city[src].visited = 1;

        for (int ad : city[src].adj) {
            dfs(ad, city);
        }
    }
}

vertex* city;
int main(int argc, char** argv) {
    // freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, s, u;
    cin >> n >> s;
    // n--, s--;
    city = new vertex[100001];

    for (int i = 1; i <= n; i++) {
        cin >> u;
        city[i].adj.push_back(i+u);
    }

    dfs(1, city);

    cout << (city[s].visited ? "YES" : "NO") << endl;
}