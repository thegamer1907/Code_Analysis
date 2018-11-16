// ~/BAU/ACM-ICPC/Teams/Rampage/MMZA
// ~/sudo apt-get verdict Accepted
// practice...
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef long long ll;
typedef vector<pair<int, int>> vp;
typedef vector<vector<pair<int, int>>> vvp;
typedef unsigned long long ull;
typedef long double ld;
const int Mod = 1000000007;
const int N=30005;
string ans;
bool vis[N];
int n,t,arr[N];
void dfs(int u){
    vis[u]=1;
    if(u==t){
        ans="YES";
        return;
    }
    if(!vis[u+arr[u]])
    dfs(arr[u]+u);
}
int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
//.\a.exe

scanf("%d %d",&n,&t);
for(int i=1;i<=n;i++)scanf("%d",arr+i);
ans="NO";
dfs(1);
puts(ans.c_str());

    return 0;
}