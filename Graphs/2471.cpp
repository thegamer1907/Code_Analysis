#include <map>
#include <set>
#include <cmath>
#include <ctime>
#include <stack>
#include <queue>
#include <cstdio>
#include <cctype>
#include <bitset>
#include <string>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <functional>
#define fuck(x) cout<<"["<<x<<"]";
#define FIN freopen("input.txt","r",stdin);
#define FOUT freopen("output.txt","w+",stdout);
//#pragma comment(linker, "/STACK:102400000,102400000")
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int maxn = 3e5+5;
const int INF = 0x3f3f3f3f;
const int MOD = 1e9+7;
int cnt;
int head[maxn],nxt[maxn],to[maxn];
int color[maxn];
int ans;
void add(int x,int y){
    to[cnt]=y;
    nxt[cnt]=head[x];
    head[x]=cnt++;
}

int main(){
#ifndef ONLINE_JUDGE
    FIN
#endif
    int n,x;
    cnt=1;
    memset(head,-1,sizeof(head));
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        scanf("%d",&x);
        add(x,i);
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&color[i]);
    }
    for(int i=1;i<=n;i++){
        for(int j=head[i];j!=-1;j=nxt[j]){
            if(color[i]!=color[to[j]]) ans++;
        }
    }
    cout<<ans+1<<endl;

}