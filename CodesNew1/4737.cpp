#include<bits/stdc++.h>

using namespace std;
const int N=5e5+9;
//
int a[N],n,cnt;
int main()
{
    scanf("%d",&n);
    for(int i=0; i<n; ++i)
        scanf("%d",a+i);
    sort(a,a+n);
    int mid=(n/2)-1;
    int i=mid,j=n-1;
    while(~i)
    {
        if(a[i]<=a[j]/2)
            --j,--i,++cnt;
        else
            cnt++,i--;
    }
    printf("%d\n",cnt+(j-mid));
    return 0;
}