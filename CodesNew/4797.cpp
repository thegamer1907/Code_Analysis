#include<bits/stdc++.h>
using namespace std;

const long long N =100005;

int main()
{
    int a[500005];
    int n;


    cin>>n;
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d", &a[i]);
    }
    sort(a,a+n);

    int l=(n >>1), r= n-1, cnt=0;
    --l;

    while(l >=0)
    {
        if(a[r] >= a[l]*2)
        {
            r--;
            l--;
            cnt++;
        }
        else
        {
            l--;
        }
    }

     printf("%d", r+1);


    return 0;
}
