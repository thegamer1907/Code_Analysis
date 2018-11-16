#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[105],b[105];
int main()
{
    int n,sum = 0,ans = 0;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> a[i];
        ans += a[i];
        if(a[i]==1)
            b[i] = -1;
        else
            b[i] = 1;
    }
    int maxn = -1;
    for(int i=0;i<n;++i)
    {
        if(sum<0)sum = b[i];
        else     sum += b[i];
        maxn = max(sum,maxn);
    }
    cout << ans + maxn << endl;

    return 0;
}
