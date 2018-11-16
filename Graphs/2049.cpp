#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int n=1E5+5,m{0};
vector<int> cat(n,0);
vector<int> tot(n,0);
vector<int> visited(n,0);
vector<vector<int> >ad(n);

void dfs(int start)
{
    stack<int> s;
    s.push(start);
    visited[start]=1;
    tot[start]=cat[start];
    while(!s.empty())
    {
        int top=s.top();
        s.pop();
        for(int x:ad[top])
        {
            if(visited[x]==0)
            {
            if(cat[x]==1)
            tot[x]=1;
            if(cat[x]==1 && cat[top]==1)
            tot[x]+=tot[top];
            if(tot[top]>m)
            tot[x]=tot[top];
            s.push(x);
            }
            visited[x]=1;
        }
    }
}

int main()
{
    int b{0},f{0};
    cin>>n>>m;
    ++n;
    for(int i{1};i!=n;++i)
    cin>>cat[i];
    for(int i{2};i!=n;++i)
    cin>>b>>f,ad[b].push_back(f),ad[f].push_back(b);
    dfs(1);
    int r{0};
    //for(int i{1};i!=n;++i)
    //cout<<"\n"<<tot[i]<<" "<<cat[i];
    for(int i{2};i!=n;++i)
    if(ad[i].size()==1 && tot[i]<=m)
    ++r;
    cout<<"\n"<<r;
}