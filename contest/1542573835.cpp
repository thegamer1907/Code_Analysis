#include<bits/stdc++.h>
using namespace std;
int a[20];
int main()
{
    int n,k,d;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
    int p=0;
    for(int j=k-1;j>=0;j--)
    {
        scanf("%d",&d);
        if(d) p+=(1<<j);
    }
    a[p]++;
    }
for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            if(((i&j)==0)&&a[i]&&a[j])
               {
                 cout<<"YES";
                 return 0;
               }
        }
    }
    cout<<"NO";
}
