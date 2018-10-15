#include<cstdio>
#include<algorithm>
#include<iostream>
#define maxn 500001

using namespace std;
int a[maxn];

int main()
{
    int ans,n,i;
    while(~scanf("%d",&n))
    {
        for(i=0; i<n; i++)
          cin >> a[i];

        sort(a,a+n);
        ans=n;
        for(i=n/2-1; i>=0; i--)
        {
            if(a[i]*2 <= a[n-1])
            {
                ans--;
                n--;
            }
        }
        cout << ans << endl;
    }
return 0;
}
