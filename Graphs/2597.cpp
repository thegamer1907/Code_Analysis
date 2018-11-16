#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;


int n;
int c[10010];
vector<int> ch[10010];
void init(){
    scanf("%d",&n);
    for(int i = 1 ; i < n ; i ++){
        int p;
        scanf("%d",&p);
        p--;
        ch[p].push_back(i);
    }
    for(int i = 0 ; i < n ; i ++){
        scanf("%d",c+i);
    }
}
int ans;
void dfs(int x,int nc){
    if(nc!=c[x])ans++;
    for(auto chld:ch[x]){
        dfs(chld,c[x]);
    }
}

int main (){
    init();
    dfs(0,0);
    printf("%d\n",ans);
}
