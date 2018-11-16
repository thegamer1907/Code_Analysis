#include<bits/stdc++.h>
#define md 1000000007
#define ll long long int
#define rep(i,n) for(int (i) = 0;(i) < (int)(n);(i)++)
#define inf INT_MAX
#define MAX 10000001
#define mp(a,b) make_pair((double)(a),(int)(b))
using namespace std;
bool dfs(int i,int a[],int t,int* visited)
{   if(i == t) return 1;
    visited[i] = 1;
    if(visited[i + a[i]] == 0)
   {
    bool ans = dfs(i + a[i],a,t,visited);
    if(ans == true) return 1; }
    return 0;
}
int main()
{
    int n, t;
    cin >> n >> t;
    int a[100000] = {};
    for(int i = 1;i <= n-1;i++) {
        cin >> a[i];
    }
    int visited[100000] = {};
    bool ans = dfs(1,a,t,visited);
    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
