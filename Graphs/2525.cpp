#include <iostream>
#include <cstring>
#include <utility>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <stack>
#include <queue>
#include <fstream>



#define mp make_pair
#define fi first
#define se second
typedef long long ll;
using namespace std;
int ans;
vector <vector <int> > g(10005);
int c[10005];
void DFS(int v,int color){
    if (color!=c[v]){
        color = c[v];
        ans++;
    }
    for (int i=0;i<g[v].size();i++)
        DFS(g[v][i],color);
}
int main(){
   int n;
   ans = 0;
   cin >> n;
   int p[n];
   for (int i=1;i<n;i++){
    cin >> p[i];
    g[p[i]-1].push_back(i);
   }
   for (int i=0;i<n;i++)
      cin >> c[i];
   DFS(0,c[0]);
   cout << ans+1;
   return 0;
}
