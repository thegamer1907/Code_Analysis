#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a[30001];
    cin >> n >> t;
    for(int i=1; i<n; i++)
    {
        cin >> a[i];
    }
    a[n]=1;
    for(int i=1; i<=n; i+=a[i])
    {
        if(i==t)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}