#include <bits/stdc++.h>
using namespace std;
int n,m,check[100009],f[100009],a[100009];

int main()
{
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=n;i>0;i--)
    {
        if (check[a[i]]==0) check[a[i]]++,f[i]=f[i+1]+1;
        else f[i]=f[i+1];
        //cout << a[i] <<' '<< check[a[i]]<<' ' << f[i]<<endl;
    }
    while(m--)
    {
        int l;
        scanf("%d",&l);
        printf("%d\n",f[l]);
    }
}
