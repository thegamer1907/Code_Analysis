#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int a[100];
int main()
{
    int n,k;
    int i;
    while(cin>>n>>k)
    {
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>=a[k-1] &&a[i]>0)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}


