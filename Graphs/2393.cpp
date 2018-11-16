#include<stdio.h>
#include<vector>
using namespace std;
vector<int> boss[2010],finalboss;
int maxz=1;
void dfs(int x,int lv){
    if(lv>maxz)
        maxz=lv;
    for(int i=0;i<boss[x].size();++i)
        dfs(boss[x][i],lv+1);
}
main(){
    int n,i,x;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d",&x);
        if(x!=-1)
            boss[x].push_back(i);
        else
            finalboss.push_back(i);
    }
    for(i=0;i<finalboss.size();++i)
    {
        dfs(finalboss[i],1);
    }
    printf("%d",maxz);
}
