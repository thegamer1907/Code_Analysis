#include <bits/stdc++.h>

using namespace std;

long long n, t;
long long books[100002];

int main()
{
    cin >> n >> t;
    for( int i = 0 ; i < n ; i++ )
        cin >> books[i];

    int l = 0, r = 0, sum=0,mx=0;

    while( r < n )
    {
        sum+=books[r];
        if(sum <= t )
        {
            mx = mx > (r-l+1)? mx: r-l+1;
        }
        else
        {
            sum-=books[l];
            l++;
        }
        r++;
    }
    cout << mx;
    return 0;
}
