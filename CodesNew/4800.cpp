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
        cin>>a[i];
         //scanf("%d", &a[i]);
    }
    sort(a,a+n);

    int l=(n >> 1) , r= n-1, cnt=0;
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

     // printf("%d", r+1);
cout<<r+1;


/*
if(cnt*2 < n)
{
    cout<<n-cnt;
}
else
{
    cout<<cnt;
}*/

    //cout<<cnt+ ( n/2 - cnt  ) ;

    //cout<<cnt +(n-cnt*2);

/*
    int ans = cnt +(n-cnt*2);
    if(ans*2 >= n)cout<<ans;
    else cout<<ans + (n-ans*2);
*/

    return 0;
}
