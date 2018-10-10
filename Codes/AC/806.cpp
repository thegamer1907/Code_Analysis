#include <bits/stdc++.h>
using namespace std;
#define int int64_t

signed main()
{
    ios_base::sync_with_stdio(0);   cin.tie(0);     cout.tie(0);
    int n, k;       cin >> n >> k;
    if(k & 1)       {   cout << 1;  return 0;   }
    int curr = n;
    int start = 1, end = pow(2, n);
    while(start <= end)
    {
        int mid = (start + end) >> 1;
        if(mid == k)    {   cout << curr;   break;  }
        else if(k < mid)
        {
            end = mid - 1;
            curr--;
        }
        else
        {
            start = mid + 1;
            curr--;
        }
    }
    return 0;
}