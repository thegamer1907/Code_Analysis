#include<iostream>
#include<cstring>
#include<vector>
#include<cmath>
#include<algorithm>
#include<queue>
#include<map>
#include<cstdio>
#include<set>
#include<cstdlib>
using namespace std;
int cnt[100005];
int cnt2[100005];
int main()
{
	int br1=0;
	int br2=0;
	int i,j,n,k;
	char c[100005];
	cin>>n>>k;
	for(i=1;i<=n;i++)
    {
        cin>>c[i];
        if(c[i]=='a') br1++;
        else br2++;
    }
    int ans=1;
    char x;
    int br=0;
    x='e';
    if(k==0)
    {
        for(i=1;i<=n;i++)
        {
            if(c[i]==x)
            {
                br++;
                ans=max(ans,br);
            }
            else {x=c[i]; br=1;}
        }
        cout<<ans<<endl;
        return 0;
    }
    if(br1>=br2) x='a';
    else x='b';
    int l=1;
    vector<int> v;
    cnt[0]=0;
    for(i=1;i<=n;i++)
    {
        if(c[i]!=x)
        {
            v.push_back(i);
            cnt[i]=0;
        }
        else cnt[i]=cnt[i-1]+1;
    }
    for(i=n;i>=1;i--)
    {
       if(c[i]!=x)
       {
           cnt2[i]=0;
       }
       else cnt2[i]=cnt2[i+1]+1;
    }
    int sz=v.size();
    if(sz<=k)
    {
        cout<<n<<endl;
        return 0;
    }
    for(i=k-1;i<sz;i++)
    {
        ans=max(ans,v[i]-v[i-k+1]+1+cnt2[v[i]+1]+cnt[v[i-k+1]-1]);
    }


    if(br1>=br2) x='b';
    else x='a';
    l=1;
    vector<int> v1;
    cnt[0]=0;
    for(i=1;i<=n;i++)
    {
        if(c[i]!=x)
        {
            v1.push_back(i);
            cnt[i]=0;
        }
        else cnt[i]=cnt[i-1]+1;
    }
    for(i=n;i>=1;i--)
    {
       if(c[i]!=x)
       {
           cnt2[i]=0;
       }
       else cnt2[i]=cnt2[i+1]+1;
    }
    sz=v1.size();
    if(sz<=k)
    {
        cout<<n<<endl;
        return 0;
    }
    for(i=k-1;i<sz;i++)
    {
        ans=max(ans,v1[i]-v1[i-k+1]+1+cnt2[v1[i]+1]+cnt[v1[i-k+1]-1]);
    }
    cout<<ans<<endl;
	return 0;
}
