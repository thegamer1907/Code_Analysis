#include<bits/stdc++.h>
#define long long long
using namespace std;
long n,k,tmp[5],vis[2][2][2][2],id;
struct data
{
    long a;
    long b;
    long c;
    long d;
}arr[100];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>k;
    for(long i=1;i<=n;i++)
    {
        for(long j=1;j<=4;j++)tmp[j]=0;
        for(long j=1;j<=k;j++)cin>>tmp[j];
        if(vis[tmp[1]][tmp[2]][tmp[3]][tmp[4]]==0)
        {
            vis[tmp[1]][tmp[2]][tmp[3]][tmp[4]]=1;
            arr[++id]={tmp[1],tmp[2],tmp[3],tmp[4]};
        }
    }
    arr[++id]={1,1,1,1};
    for(long i=1;i<=id;i++)
    {
        for(long j=i+1;j<=id;j++)
        {
            if(arr[i].a+arr[j].a<2&&arr[i].b+arr[j].b<2&&arr[i].c+arr[j].c<2&&arr[i].d+arr[j].d<2)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
