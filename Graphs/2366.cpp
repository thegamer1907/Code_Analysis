#include <iostream>
#include <vector>
#include <algorithm>
#define f first
#define s second
using namespace std;

vector <vector <int> > gr;

int dfs(int v, int l);

int main(){
    int n;
    cin >> n;
    gr.resize(n);
    vector <bool> a(n, false);
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x == -1){
            a[i] = true;
        }
        else{
            x--;
            gr[x].push_back(i);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        if (a[i]){
            ans = max(ans, dfs(i, 1));
        }
    }
    cout << ans;
    return 0;
}

int dfs(int v, int l){
    int res = l;
    for (int i = 0; i < gr[v].size(); i++){
        res = max(res, dfs(gr[v][i], l + 1));
    }
    return res;
}
