#include <bits/stdc++.h>

using namespace std;


int main ()
{
    int n,i,j,c[500],mx=0,sum=0,sum1=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>c[i];
        sum+=c[i];
    }
    for(i=0;i<n;i++)
    {
        sum1=sum;
        for(j=i;j<n;j++)
        {
            if(c[j]==0)
                sum1++;
            else
                sum1--;
            mx=max(mx,sum1);
        }
    }
    cout<<mx;
    return 0;
}
