#include<bits/stdc++.h>

using namespace std;
map<int,int>mp;
int n,k;
int cnt[4] = {1,2,4,8};
int flag;
int num[4],sum ;
int xx[4],yy ;
void dfs(int x,int y)
{
    if(flag)return ;
    if(x==yy)
    {
        if(mp[y])flag = 1;
        return ;
    }
    dfs(x+1,y+xx[x]);
    dfs(x+1,y);
}
int main()
{
    cin>>n>>k;
    flag = 0;
    for(int i=0;i<n;i++)
    {
        sum = 0,yy = 0;
        for(int j=0;j<k;j++)
        {
            scanf("%d",&num[j]);
            if(num[j])sum+=cnt[j];
            else xx[yy++] = cnt[j];
        }
        if(yy==k)flag = 1;
        dfs(0,0);
        mp[sum]++;
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}