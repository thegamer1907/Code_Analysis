#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    FIO;
    int n,ans=0,c=0,p=1;
    cin >> n;
    int a[n];
    for(int i=0 ; i<n ;i++)
    {
        cin >> a[i];
        if(a[i]==1)
            c++;
    }
    ans=c;
    if(c==n)
        cout << n-1;
    else if(c==0 || c==n-1)
        cout << n;
    else
    {
      while(p<=n)
      {
        for(int j=0 ; j<n ; j++)
        {
            int c1=0,o=0,z=0,k=j;
            while(c1<p && k<n)
            {
                if(a[k++]==0)
                    z++;
                else
                    o++;
                c1++;
            }
            if((c-o+z)>ans)
                ans=c-o+z;
        }
        p++;
      }
      cout << ans;
    }

    return 0;
}
