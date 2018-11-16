#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,cnt=0,ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cnt=0;
            for(int k=i;k<=j;k++)
                a[k]^=1;
            for(int i=0;i<n;i++)
                cnt+=a[i];
            if(cnt>ans)
                ans=cnt;
            for(int k=i;k<=j;k++)
                a[k]^=1;
        }
    }
    cout<<ans;
}
