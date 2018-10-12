#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
     int n,s[500001],sum,i,low,high,mid,a,b,c;
    cin >> n;
    for (i = 0; i < n; ++i)
        cin >> s[i];

    sort(s, s + n);

     low = 0, high = n/2;
    while (low <= high)
    {
        mid = (low+ high) / 2;
        c=1;
        for (a = 0, b = n - mid; a < mid; ++a, ++b)
        {
            if (2 * s[a] > s[b])
                c=0;
        }
        if (c==1)
            low = mid + 1;
        else
            high = mid - 1;
    }
    sum=n-(low-1);

    cout <<sum<< endl;

    return 0;
}
