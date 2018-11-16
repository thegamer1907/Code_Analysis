#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[102],mx=-1,c,z,s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        c=s;
        for(int j=i;j<n;j++)
        {
            if(!arr[j]) c++;
            else c--;
            mx=max(c,mx);
        }
    }
    printf("%d\n",mx);
 }
