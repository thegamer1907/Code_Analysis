#include <bits/stdc++.h>
using namespace std;
int n,c=0,a[100+5],ma=-100;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // freopen("important.in","r",stdin);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        c+=a[i];
    }

     for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            int o=0,z=0;
            for (int k=i;k<=j;k++)
			{
				if (a[k]==0)
                    z++;
				else o++;
			}
			if (z-o>ma)
				ma=z-o;
        }

    }
    cout<<ma+c<<endl;

    return 0;
}
