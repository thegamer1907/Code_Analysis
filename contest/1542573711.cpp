#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+9;
//int ans[maxn][maxn>>9][5];
int que[maxn][5];
struct node
{
    int id;
    int val;
    bool operator<(const node a)
    {
        return a.val<val;
    }
    bool operator==(const node a)
    {
        return a.val==val;
    }
} tr[maxn];
bool cmp(node a,node b)
{
    return a.val<b.val;
}
int main()
{
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
        tr[i].id = i;
        tr[i].val = temp;
    }
    sort(tr+1,tr+n+1);
    int pos = unique(tr+1,tr+n+1)-tr;
    for(int i = 1; i<pos; ++i)
    {
        for(int j = i+1; j<pos; ++j)
        {
            int flag = 0;
            for(int z = 1; z<=k; ++z)
            {
                if(que[tr[i].id][z]+que[tr[j].id][z]==2)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==0)
            {
                puts("YES");
                return 0;
            }
        }
    }
    if(pos==2)
    {
        int flag = 0;
        for(int i = 1 ;i<=k;++i)
            if(que[pos-1][i]!=0)flag = 1;
        if(flag==0)puts("YES");
        else puts("NO");
    }
    else cout<<"NO\n";
    return 0;
}
