#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e5+10;

int n;
int m;
int maxx,minn;
int a[maxn];

int main()
{
    cin>>n;
    cin>>m;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum += a[i];
        maxx = max(maxx,a[i]);
        minn = max(minn,a[i]);
    }
    minn = max(minn,(sum + m - 1) / n + 1);
    maxx = maxx + m;
    cout<<minn<<" "<<maxx<<endl;
    return 0;
}