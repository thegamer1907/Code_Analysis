#include <bits/stdc++.h>

using namespace std;

int a[105];
int n, m;
int maxx;
int minn;

int main()
{
    cin>>n;
    cin>>m;
    int cm= m;
    for (int i =1 ;i<=n;i++)
    {
        cin>>a[i];
        maxx = max(maxx, a[i]);
    }
    sort(a+1, a+n+1);
    while (m)
    {
        int first = a[1];
        a[1]++; m--;
        if (!m) break;
        for (int i = 2;a[i]==first&&m;i++)
        {
            a[i]++; m--;
        }
    }
    for (int i = 1;i<=n;i++)
    {
        minn = max(minn, a[i]);
    }
    cout<<minn<<' '<<maxx+cm<<'\n';
    return 0;
}
