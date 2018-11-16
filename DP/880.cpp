#include <iostream>

using namespace std;
int a[109],flag;
int f[109],g[109],maxx;
int main()
{
    int n;
    cin >> n;
    if (n==1)
    {
        cin >> a[n];
        if (a[n]==0) cout << 1; else cout << 0;
        return 0;
    }
    //8
    //1 0 0 0 1 0 0 0
    a[0]=-1;
    f[0]=0;g[0]=0;
    int check =0;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
        f[i]=f[i-1];g[i]=g[i-1];
        if (a[i]==1)
        {
            f[i]++;
        }
        if (a[i]==0)
        {
            g[i]++;
            check = 1;
        }
    }
    if (check==0)
    {
        cout << n-1;
        return 0;
    }
    for (int i=1;i<=n;i++)
    for (int j=i;j<=n;j++)
    {
        maxx = max(maxx,((g[j]-g[i-1])-(f[j]-f[i-1])));
    }
    cout << f[n]+maxx;
    return 0;
}
