#include<map>
#include<vector>
#include<iostream>
#include<algorithm>
#include <iomanip>
#include<bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x);
#define pb push_back;
typedef long long                           ll;
typedef vector<int>                         vi;
typedef vector<long long>                   vll;
typedef vector<bool>                        vb;
typedef vector<double>                      vd;
typedef vector< vector<int> >               vvi;
typedef pair<int, int>                      pii;
typedef vector< pair<int,int> >             vpii;
typedef vector< vector< pair<int,int> > >   vvpii;
const ll INF = 10000005;
const int N  = 3e5+50;
const float pi = 3.14159265359;
const ll MAX = 2e6+50;

vvi vec(100005);
int visited[100005];
int t;
bool flag = false;

void dfs(int u)
{
    if(u == t) flag = true;
    visited[u] = 1;
    for(int i=0;i<vec[u].size();i++){
        int v = vec[u][i];
        if(!visited[v]) dfs(v);
    }


}



int main()
{
    int n;
    cin >> n >> t;
    for(int i=1;i<n;i++){
        int x;
        cin >> x;
        vec[i].push_back(x+i);
    }

    dfs(1);
    (flag)? cout << "YES" << endl : cout << "NO" << endl;
}


