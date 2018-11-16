#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define endl '\n'
#define loop(n) for(int i = 0; i < (n); i++)
vector<vector<int> > edges(10e5 + 9);
string ans = "NO";
void dfs(int node, int t){
    for(int child: edges[node]){
        if(child == t)
            ans = "YES";
        else
            dfs(child, t);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n, t;   cin >> n >> t;
    for(int i = 1; i < n; i++){
        int a;  cin >> a;
        edges[i].push_back(i + a);
    }
    dfs(1, t);
    cout << ans << endl;
    return 0;
}


























/*
    while(1){
    vector<int> ans;
    int n, remaining;  cin >> n;
    if(n == 0)  break;
    deque<int> dq;
    for(int i = 1; i <= n; i++)
        dq.push_front(i);
    for(int i = 0; i < n - 1; i++){
        if(i == n - 2){
            remaining = dq.front();
        }
        int backN = dq.back();
        ans.push_back(backN);
        dq.pop_back();
        backN = dq.back();
        dq.push_front(dq.back());
        dq.pop_back();
    }
    cout << "Discarded cards:" ;
    for(int i = 0; i < ans.size(); i++)
        if(i == ans.size() - 1)
           cout << " " << ans[i] << endl;
        else
            cout << " " << ans[i] << ',';

    cout << "Remaining card: " << remaining << endl;
    }
*/
