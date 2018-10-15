#include <bits/stdc++.h>
using namespace std ;


int a[500005];

int main()
{
    int n ;
    cin >> n ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }
    sort(a,a+n);
    int cnt = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] >= 2*a[cnt])
        {
            cnt++;
        }
    }
    cout << n - min(n/2,cnt) << endl;
    return 0 ;
}
