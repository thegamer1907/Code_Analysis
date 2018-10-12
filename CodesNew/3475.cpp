#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<iostream>
#include<map>
#include<vector>
#define Inf 0x3f3f3f3f
#define PI acos(-1.0)
using namespace std;
typedef long long ll;
map<string,ll>::iterator it;
int dp[1234];
ll m,n;
ll str[100001];
int l=0;
int vis[11][10]= {{1,1,1},{1,2,4,5},{1,2,3},{2,3,5,6},{1,4,7},{2,4,5,6,8},{3,6,9},{4,5,7,8},{7,8,9},{5,6,8,9}};
int dis[11]= {0,4,3,4,3,5,3,4,3,4};
int main()
{

    cin>>m>>n;
    ll k=-1;
    for(int i=0; i<m; i++)
    {
        cin>>str[i];
        k=max(str[i],k);
    }
    ll p=n;
    for(int i=0;i<m;i++)
    {
        if(k!=str[i]&&n)
        {
            if(str[i]+n>=k)
            {
                n=n-(k-str[i]);
                str[i]=k;
            }
            else
            {
                str[i]+=n;
                n=0;
            }
        }
    }
    ll kk=-1;
    for(int i=0;i<m;i++)
    {
        str[i]+=n/m;
        if(n%m)
            str[i]++;
        kk=max(str[i],kk);
    }
    cout<<kk<<" "<<k+p<<endl;
}




