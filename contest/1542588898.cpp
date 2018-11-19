#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define sez(a) (int)(a.size())
const int maxn=2e5+100;
const int MOD=1e9+7;
const ll INF=1e18;
const ld PI=3.141592653589793;
string w[101];
vector<int> g[101];
bool used[101];
bool bad[101][101];
void dfs(int v){
  //  cout<<v<<"\n";
    used[v]=true;
    if (!used[(v+1)%60] && !bad[v][(v+1)%60])
        dfs((v+1)%60);
    if (!used[(v-1+60)%60] && !bad[v][(v-1+60)%60])
        dfs((v-1+60)%60);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifdef kolya
  //      freopen("input.txt","r",stdin);
  //      freopen("output2.txt","w",stdout);
    #endif
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    h%=12;
    t1%=12;
    t2%=12;
    int pos_s=s;
    bad[s][(s+1)%60]=true;
    bad[(s+1)%60][s]=true;
    bad[m][(m+1)%60]=true;
    bad[(m+1)%60][m]=true;
    bad[h*5+1][h*5+2]=true;
    bad[h*5+2][h*5+1]=true;
    dfs(t1*5);
    if (used[t2*5])
        cout<<"YES";
    else
        cout<<"NO";
}
