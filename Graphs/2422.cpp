#include <bits/stdc++.h>

using namespace std;

int n;
bool is[2001];
int ans = 0;
vector <int> x[2002];

dfs(int nx, int lvl){

    ans = max(ans, lvl);

    is[nx] = true;

    for (auto v : x[nx])
        dfs(v, lvl + 1);

}

int main(){

    cin >> n;

    queue <int> cola;

    for (int i = 1 ; i <= n ; i++){
        int a;
        cin >> a;
        if (a != -1)
            x[a].push_back(i);
        else
            cola.push(i);
    }

    while (!cola.empty()){

        dfs(cola.front() , 1);
        cola.pop();
    }

    cout << ans << endl;



return 0;

}
