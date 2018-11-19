#include <bits/stdc++.h>
using namespace std;
int n,k;
int ok=0;
set<int> s;
vector<int> st;
set<int>::iterator it;

int vis[10000]={0};

int check(int tmp,int w)
{
    while(tmp)
    {
        if(tmp%10 > (w/2))
            return 0;
        tmp/=10;
    }
    return 1;
}

void dfs(int j,int now,int w)
{
    if(w>16)return ;
    if(ok)return ;
    for(int i=j+1;i<st.size()&&!ok;i++)
    {
        if(vis[st[i]])continue;
        vis[st[i]]=1;
        int nnow = now + st[i];
        if(check(nnow,w+1))ok=1;
        else
            dfs(i,nnow,w+1);
        vis[st[i]]=0;
    }
}

int main()
{
    cin>>n>>k;
    int base=1,a;
    for(int i=1;i<=n;i++)
    {
        int tmp=0;
        base=1;
        for(int j=1;j<=k;j++)
        {
            scanf("%d",&a);
            tmp+=(a*base);
            base*=10;
        }
        s.insert(tmp);
        if(!tmp)return cout<<"YES",0;
    }
    for(it=s.begin();it!=s.end();it++)
    {
        st.push_back(*it);
    }
    for(int i=0;i<st.size();i++)
    {
        dfs(i,st[i],1);
    }
    cout<<((ok)?"YES":"NO");

    return 0;
}
