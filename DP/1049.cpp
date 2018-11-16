#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e2+5;
int n, res, ans, a[maxn];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i])
            res++;
    }
    ans = res;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int b = res;
            for(int k = i; k <= j; k++)
            {
                if(a[k])
                    b--;
                else
                    b++;
            }
            if(!i && !j)
                ans = b;
            else
                ans = max(ans, b);
        }
    }
    cout << ans << endl;
    return 0;
}
