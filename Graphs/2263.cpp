#include<bits/stdc++.h>

using namespace std;
vector<int>roots;
vector< vector<int> > lista(2001);
int getHight(int s)
{
    if(lista[s].size()==0)
        return 1;
    int ans=1;
    for(int i=0; i<lista[s].size(); i++)
    {
        ans=max(ans, getHight(lista[s][i])+1);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int a;
        cin>>a;
        if(a==-1)
            roots.push_back(i);
        else
            lista[a].push_back(i);
    }
    int ans=0;
    for(int i=0; i<roots.size(); i++)
    {
        ans=max(getHight(roots[i]), ans);
    }
    cout<<ans<<endl;
}
