#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int a[100000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i > 0)
            a[i]+=a[i-1];
    }
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        int cur;
        cin >> cur;
        int l = 0;
        int r = n-1;
        while(l+1 < r)
        {
            int mid = (l+r)/2;
            if(cur >= a[mid])
                l = mid;
            else
                r = mid;
        }
        if(cur <= a[l])
            cout << l+1;
        else
            cout << r+1;
        cout << '\n';

    }
    return 0;
}
