#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    int n,i,j,k,l,m;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        cin>>a[i];

        sort(a,a+n);
        int l=n/2;
        int r=n-1;
        int ans;
        while(l<=r)
        {
            int mid=(l+r)/2;

            if(a[mid]>=2*a[0])
            {
                ans=mid;
                r=mid-1;
            }

            else
            l=mid+1;
        }
        k=0;
        int count=0;
        for(i=ans;i<n;i++)
        {
            if(k==ans)
            break;

            if(a[i]>=2*a[k])
            {
                count++;
                k++;
            }
        }
        cout<<n-count;
    }
    return 0;
}
