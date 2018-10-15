#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,o,i,a[110],MAX=-1,z;
    cin >> n >> m;
    o=m;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(MAX<a[i]) MAX = a[i];
    }
    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        z = MAX - a[i];
        if(m>=z && z>0)
        {
            a[i]+=z;
            m-=z;
        }
        else if(z>m){
            cout << MAX << " " << MAX+o;
            return 0;
        }
        else break;
    }
    if(m<=n && m>0)
    {
        cout << MAX+1 << " " << MAX+o;
        return 0;
    }
    else if(m>n)
    {
        if(m%n==0)
            cout << MAX+(m/n) << " " << MAX+o;
        else
            cout << MAX+(m/n)+1 << " " << MAX+o;
        return 0;
    }
    else
        cout << MAX << " " << MAX+o;
    return 0;
}







