#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    vector<bool> v;
    vector<int> precount1(n,0);
    vector<int> sufcount1(n,0);
    vector<int> count(n,0);
    for(i=0;i<n;i++)
    {
        bool num;
        cin>>num;
        v.push_back(num);
    }
    for(i=0;i<n;i++)
    {
        if(v[i]==1 && i==0) precount1[i]=1;
        else if(v[i]==1) precount1[i]=1+precount1[i-1];
        else if(i!=0) precount1[i]=precount1[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        if(v[i]==0 && i==n-1) count[i]=1;
        else if(v[i]==1 && i==n-1) sufcount1[i]=1;
        else if(v[i]==0) { count[i]=count[i+1]+1; sufcount1[i]=sufcount1[i+1]; }
        else if(v[i]==1) {count[i]=count[i+1]; sufcount1[i]=sufcount1[i+1]+1; }
    }
    int ans=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(v[i]==0 && v[j]==0)
            {
            int curr=0;
            if(i-1>=0) curr=curr+precount1[i-1];
            if(j+1<=n-1) curr=curr+sufcount1[j+1];
            curr=curr+count[i]-count[j]+1;
            ans=max(ans,curr);
            }
        }
    }
    if(count[0]==0) cout<<n-1<<endl;
    else cout<<ans<<endl;
    return 0;
}
