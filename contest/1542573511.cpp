#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+9;
//int ans[maxn][maxn>>9][5];
int que[maxn][5];
struct node
{
    int id,val;
    bool operator<(const node &a)const
    {
        return a.val<val;
    }
   // bool operator==(const node &a)
   // {
   //     return a.val==val;
   // }
} tr[maxn];
bool cmp(node a,node b)
{
    return a.val<b.val;
}
int main()
{
    set<node>se;
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i = 1; i<=n; ++i)
    {
        int temp=0,cnt = 1;
        for(int j = 1; j<=k; ++j)
        {
            scanf("%d",&que[i][j]);
            temp+=(que[i][j]*cnt);
            cnt*=2;
        }
        node n;
        n.id = i;n.val = temp;
        se.insert(n);
    }
   for(auto it = se.begin();it!=se.end();++it)
   {
       auto t = it;t++;
       for(;t!=se.end();++t)
       {
           int flag = 0;
           for(int i = 1;i<=k;++i)
            if(que[it->id][i]+que[t->id][i]==2)flag = 1;
           if(!flag)
           {
               puts("YES");
               return 0;
           }
       }
   }
    if(se.size()==1&&(*se.begin()).val==0) puts("YES");
    else cout<<"NO\n";
    return 0;
}
