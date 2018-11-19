#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int a[100005][5],flag,n,k;
void dfs(string st,int cur)
{
//    cout<<st;
//    cout<<endl;
    if(flag==1)
        return ;
    if(cur==k)
    {
//        for(int i=0; i<k; i++)
//            printf("%c",st[i]);
//        cout<<endl;
        if(mp[st]==1)
            flag=1;
        return ;
    }
    if(st[cur]=='1')
    {
        st[cur]='0';
        dfs(st,cur+1);
    }
    else
    {
        dfs(st,cur+1);
        st[cur]='1';
        dfs(st,cur+1);
    }
}
int main()
{
    flag=0;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        string st;
        for(int j=0; j<k; j++)
        {
            scanf("%d",&a[i][j]);
            st+=a[i][j]+'0';
        }
        mp[st]=1;
        int cnt=0;
        for(int i=0; i<k; i++)
        {
            if(st[i]=='0')
                cnt++;
        }
        if(cnt==k)
            flag=1;
    }
    for(int i=0; i<n; i++)
    {
        if(flag==1)
            break;
        string st;
        for(int j=0; j<k; j++)
            st+=a[i][j]+'0';
        dfs(st,0);
    }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
