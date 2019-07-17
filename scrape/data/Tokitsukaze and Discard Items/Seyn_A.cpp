#include <bits/stdc++.h>
#define ll long long
using namespace std;

long long int n, m, k, v[100005], ans, p;
int main()
{
    cin >> n >> m >> k;

    for(int i = 1; i <= m; i++)
        cin >> v[i];

    ll l, r;
    l = 1, r = m;
    ll t = k;
    while(l <= r)
    {
        ll left,right;
        left = l, right = r;
       ll mid;
        if((v[l]-p)%k == 0)
            t = v[l]-p;
        else
        t = (v[l]-p)/k*k+k;
       ll sol = -1;
        while(left<=right)
        {
            mid = (left+right)/2;
            if(v[mid]-p <=t)
            {

                sol = mid;
                left = mid+1;
            }
            else
                right = mid-1;

        }


            ans++;
            p += (sol-l+1);
            l = sol+1;


    }

    cout << ans;
    return 0;
}