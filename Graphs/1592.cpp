#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n,t,a[100100];
    cin>>n>>t;
    for(int i=1;i<n;i++)
        cin>>a[i];
    for(int i=1;;i+=a[i])
    {
        if(i==t)
        {
            cout<<"YES";
            return 0;
        }
        if(i>t)
        {
            cout<<"NO";
            return 0;
        }
    }
    return 0;
}
