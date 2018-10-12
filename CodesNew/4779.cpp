#include<bits/stdc++.h>

using namespace std;
const int N=5e5+9;
int a[N],n,cnt;
int main()
{
    scanf("%d",&n);
    for(int i=0; i<n; ++i)
        scanf("%d",a+i);
    sort(a,a+n);
    int mid=(n/2)-1;
    int l=mid,r=n-1;
    while(~l)
    {
        if(a[l]<=a[r]/2)
            --r,--l,++cnt;
        else
            cnt++,l--;
    }
    printf("%d\n",cnt+(r-mid));
    return 0;
}
