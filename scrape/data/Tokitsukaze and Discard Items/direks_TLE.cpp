#include<bits/stdc++.h>
using namespace std;
const int Size=1024;
const int  mod=1e9+7;
#define lson  rt<<1
#define rson  rt<<1|1
#define rep(i,a,b)  for(i=a;b>=i;++i)
#define dep(i,a,b)  for(i=a;i>=b;--i)
#define pb  push_back
#define pii pair<int,int>
typedef long long ll;
const int  maxn=1e5+15;

int p[maxn];
int main()
{
    int n,m,k,i,j,ans,res;
    scanf("%d%d%d",&n,&m,&k);
    for(i=1;m>=i;i++)
    {
        scanf("%d",&p[i]);
    }
    ans=0;
    res=0;
    for(i=1;m>=i;i++)
    {
        int block=(p[i]-ans-1)/k;
        int num=ans;
        for(j=i+1;m>=j;j++)
        {
            if((p[j]-ans-1)/k==block) num++;
            else break;
        }
        ans=num;
        i=num;
        res++;
    }
    printf("%d\n",res);
    return 0;
}