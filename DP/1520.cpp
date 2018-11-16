#include <bits/stdc++.h>
using namespace std;
int ans, arr[100];
int main()
{
    int n, o = 0, z = 0; cin >> n;
    ans = -1;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 1)
        {
            o++;
            z--;
        }
        else
            z++;
        ans = max(ans, z);
        if(z < 0)
            z++;
    }
    cout << ans + o;
    return 0;
}
