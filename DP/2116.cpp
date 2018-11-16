#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int a[100003],b[100003],ans[100003];
int main()
{
    std::ios::sync_with_stdio(false);
    int n,m;
    cin >> n >> m;
    fill(b,&b[100002],0);
    for (int i=1; i<=n; i++)
        cin >> a[i];
    ans[n]=1;
    b[a[n]]=1;
    for (int i=n-1; i>0; i--)
        if (b[a[i]]==0)
        {
            b[a[i]]=1;
            ans[i]=ans[i+1]+1;
        }
        else
            ans[i]=ans[i+1];
    for (int i=1; i<=m; i++)
    {
        int j;
        cin >> j;
        cout << ans[j] << '\n';
    }
    cout.flush();
    return 0;
}