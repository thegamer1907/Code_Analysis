#include<cstdio>
using namespace std;
int n,t;
int a[30005];
bool mark[30005];
int main(){
    scanf("%d%d",&n,&t);
    for(int i=1;i<n;i++)scanf("%d",&a[i]);
    mark[1]=1;
    for(int i=1;i<n;i++)
        if(!mark[i])continue;
        else mark[i+a[i]]=1;
    if(mark[t])puts("YES");
    else puts("NO");
    return 0;
}
