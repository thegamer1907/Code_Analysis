#include <bits/stdc++.h>
using namespace std;
int n,a[101],cnt,mx;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            cnt=0;
            for(int k=1;k<=n;k++)
            {
                if(k>=i&&k<=j) cnt+=(1-a[k]);
                else cnt+=a[k];
            }
            mx=max(mx,cnt);
        }
    }
    cout<<mx<<endl;
    return 0;
}
