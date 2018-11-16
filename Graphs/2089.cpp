#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n>m)
    {
        cout<<n-m;
        return 0;
    }
    else
    {
        int dem=0;
        while(m>n)
        {
            if(m%2==1)
            {
                m=(m+1)/2;
                dem+=2;
            }
            else
            {
                m/=2;
                dem++;
            }
        }
        cout<<dem+n-m;
    }
}
