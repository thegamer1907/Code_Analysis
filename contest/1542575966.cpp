#include<bits/stdc++.h>
using namespace std;

constexpr int sz = 14;

string pre[205], suf[205];
bitset<1<<sz> pos[205][sz];
char in[111];

void foo(int z, string s)
{
    int n = s.size();
    for(int d=1;d<=n &&d<=sz;d++)
    {
        int mask = (1<<d)-1, x = 0;
        for(int i=0;i<d;i++)
        {
            x *= 2;
            if(s[i]=='1') x++;
        }
        pos[z][d][x] = true;
        for(int i=d;i<n;i++)
        {
            x = (x*2)&mask;
            if(s[i]=='1') x++;
            pos[z][d][x] = true;
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%s",in);
        int m = strlen(in);
        for(int j=0;j<m && j<sz;j++)
        {
            pre[i].push_back(in[j]);
            suf[i].push_back(in[m-j-1]);
        }
        reverse(suf[i].begin(),suf[i].end());
        foo(i,in);
    }
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        n++;
        for(int i=1;i<sz;i++) pos[n][i] = pos[a][i] | pos[b][i];
        foo(n,suf[a]+pre[b]);
        pre[n] = (pre[a]+pre[b]).substr(0,sz);
        suf[n] = suf[a]+suf[b];
        if(suf[n].size() > sz)
        {
            suf[n] = suf[n].substr(suf[n].size()-sz);
        }
        int ans = 0;
        for(int i=1;i<sz;i++)
        {
            if(pos[n][i].count() == (1<<i)) ans = i;
            else break;
        }
        printf("%d\n",ans);
    }
}
