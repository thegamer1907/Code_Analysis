#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    int a[101];
     cin >> n;
for (int i = 0; i < n; i++)
    {
        int x;cin >> x;
        if (x == 0)
            a[i] = 1;
        if (x == 1)
        {
            a[i] = -1;
            count++;
        }
    }
    int sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {        sum += a[i];
            ans = max(ans, sum);
        if (sum < 0)
            sum = 0;
    }
if (count == n)
        cout << count - 1;
    else
        cout << count + ans;
   return 0;
}