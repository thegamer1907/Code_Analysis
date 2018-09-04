#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    long long int sum = 0;
    for (int i=0  ;  i<n  ;  i++) {
        cin >> a[i];
        sum += a[i];
    }

    if (sum%3 != 0)
    {
        cout << 0;
        return 0;
    }
    sum /= 3;

    int w[n] , t=0;
    long long int s = 0;

    for (int j=n-1  ;  j>=1  ;  j--)
    {
        w[j] = t;
        s+= a[j];
        if (s == sum)
            t++;
    }

    long long int ans = 0;  s = 0;

    for (int i=1  ;  i<n-1  ;  i++)
        {
            s += a[i-1];
            if (s == sum)
                ans += w[i];
        }

    cout << ans;
}
