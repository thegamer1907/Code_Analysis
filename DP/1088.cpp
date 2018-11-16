#include<bits/stdc++.h>
using namespace std;
int a[105];
int b[105];
int main()
{
    int n,sum=0,ans=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i])
            sum++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int x=sum;
            for(int k=i;k<=j;k++)
            {
               if(a[k])
                   x--;
               else x++;
            }
            ans=max(ans,x);
        }
    }
    cout<<ans<<endl;
}
