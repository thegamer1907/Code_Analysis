#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

const long long N = 200010;
long long n;
long long a[N];
long long s[N];
map<long long, long long> m;

int main()
{
    cin >> n;
    for (long long i = 0;i < n;++ i)
        cin >> a[i];
    long long sum = 0;
    for (long long i = 0;i < n;++ i)
    {
        sum += a[i];
        s[i] = sum;
    }
    sum = 0;
    for (long long i = n-1;i >= 0;-- i)
    {
        sum += a[i];
        m[sum] = i;
    }
    long long ans = 0;
    for (long long i = n-1;i >= 0;-- i)
        if (m.find(s[i]) != m.end() && m[s[i]]>i)
        {
            ans = s[i];
            break;
        }
    cout << ans << endl;
    return 0;
}