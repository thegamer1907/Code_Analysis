#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    long long n, m, k;
    cin >> n >> m >> k;
    ll item[m+1] = {};
    for(long long i = 0; i < m; i++)
    {
        cin >> item[i];
    }
    long long total = 0;
    long long tem = k;
    bool ok = true;
    long long j = 0;
    while(1)
    {
        if(ok == false)
        {
            break;
        }
        if(j >= m)
        {
            break;
        }
        long long Count = 0;
        while(1)
        {
            if(j >= m)
            {
                break;
            }
            if(item[j] > tem)
            {
                break;
            }
            else
            {
                Count++;
                j++;
            }
        }
        if(Count > 0)
        {
            total++;
            tem += Count;
        }
        else if(Count == 0 && j < m)
        {
            tem = (tem * (long long)(item[j]/tem)) + k;
        }
    }
    cout << total << endl;

    return 0;
}