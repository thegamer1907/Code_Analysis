#include <bits/stdc++.h>
using namespace std;

//definition
#define PI acos(-1)
#define MAX 1000000010

//typedef
typedef long long int ll;

//global declaration

//functions

//main code
int main()
{
    ll n, m, k, x;
    vector < ll > v;
    cin >> n >> m >> k;
    for(int i = 0; i < m; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    ll it = k, ucnt = 0, sz = v.size(), cnt = 0;
    for(int i = 0; i < sz; )
    {
        if(v[i] <= it)
        {
            cnt++;
            i++;
        }
        else
        {
            if(cnt)
            {
                ucnt++;
                it += cnt;
            }
            else
            {
                ll l = v[i] - it;
                it += ceil(l/k) * k;
            }
            if(it > n) it = n;
            cnt = 0;
        }
    }
    if(cnt) ucnt++;

    cout << ucnt << endl;
    return 0;
}