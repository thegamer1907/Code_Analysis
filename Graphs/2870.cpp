#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<vector<int> > s;
vector<int> color;

bool dfs(int v, int p){
    color[v] = 1;
    bool flag = false;
    for (int u : s[v]){
        if (color[u] == 0)
            flag |= dfs(u, v);
        else
            if (u != p)
                flag = true;
    }
    return flag;
}

int main(){
	//freopen("test.in", "r", stdin);
	//freopen("test.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	s.resize(n);
    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        s[a - 1].push_back(b - 1);
        s[b - 1].push_back(a - 1);
    }
    color.resize(n);
    int answer = 0;
    for (int i = 0; i < n; i++){
        if (color[i] == 0 && (!dfs(i, -1)))
            answer++;
    }
    cout << answer << endl;
	return 0;
}
