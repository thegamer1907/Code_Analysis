#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1000005];
int main()
{
    int n,last = 0,t,ans = 0,len = 0;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> t;
        if(t>last)
        {
            len++;
            ans = max(ans,len);
        }
        else
        {
            len = 1;
            last = t;
        }
        last = t;
    }
    cout << ans << endl;


    return 0;
}
