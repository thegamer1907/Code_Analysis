#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,x,y,n,ans,curr;
    int jwb;
    scanf("%d",&n);
    scanf("%d",&k);
    int temp = k;
    int arr[n];
    int maxi = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        maxi = max(maxi,arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(maxi - arr[i] > k)
        {
            arr[i] += k;
            k = 0;
        }
        else
        {
            k -= (maxi-arr[i]);
            arr[i] = maxi;
        }
        if(k == 0)
            break;
    }
    if(k == 0)
        ans = maxi;
    else
    {
        jwb = ceil((float)k/n);
        ans = jwb+maxi;
    }
    printf("%d %d\n",ans,maxi+temp);
    return 0;
}
