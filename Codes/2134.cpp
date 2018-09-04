#include <iostream>
#include <string>
#include <map>
using namespace std;
map<long long, long long> m1;
map<long long, long long> m2;
long long ans;
int n, k;
int a[200000];
int main()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] % k == 0)
        {
            if(m2.count(a[i] / k))
            {
                ans += m2[a[i] / k];
            }
            if(m1.count(a[i] / k))
            {
                m2[a[i]] += m1[a[i] / k];
            }
        }
        if(!m1.count(a[i]))
        {
            m1.insert(make_pair(a[i], 1));
        }
        else
        {
            m1[a[i]]++;
        }
    }
    cout << ans;
    return 0;
}
