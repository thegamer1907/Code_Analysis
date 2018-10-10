#include<bits/stdc++.h>

using namespace std;
typedef long long LL;
const int inf = 0x3fffffff;
const LL inf64 = (LL)inf*inf;
int n;
int a[110000];
int main()
{
    while(cin>>n)
    {
        int minT = inf;
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            int t = (a[i]-i+n-1)/n;
            if (t *n+i<minT) {
                minT = t*n+i;
                ans = i + 1;
            }
        }
        cout << ans <<endl;
    }
    return 0;
}
