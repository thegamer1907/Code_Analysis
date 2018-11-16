
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n,t,m,x;

    cin >> n >> t;
    int a[n];

    for(int i = 1; i<n; i++)
        cin >> a[i];

    for(int i = 1; i < n; i++)
    {
        m = i + a[i];
        if(m == t)
        {
            cout << "YES" << endl;
            return 0;
        }
        else i = m - 1;
    }
    cout << "NO" << endl;

    return 0;
}