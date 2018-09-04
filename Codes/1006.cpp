#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#define ll long long
using namespace std;
const int maxn = 1e5+1;
int a[maxn],b[maxn];
int main()
{
    string s;
    int n,k;
    cin>>n>>k>>s;
    s = " "+s;
    for(int i = 1;i<=n;i++)
    {
        a[i] = a[i-1] + (s[i] == 'a');
        b[i] = b[i-1] + (s[i] == 'b');
    }
    int ans = 0;
    for(int i = 1;i<=n;i++)
    {
        int r = upper_bound(b + 1,b + n + 1, b[i-1] + k) - (b+1);
        ans = max(ans,a[r] - a[i-1] + b[r] - b[i-1]);
        r = upper_bound(a + 1,a+n+1,a[i-1] +k) - (a +1);
        ans = max(ans,b[r] - b[i-1]+ a[r] - a[i-1]);
    }
    cout<<ans<<endl;
    return 0;
}
