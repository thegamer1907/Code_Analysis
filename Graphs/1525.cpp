#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,i,j,t,c,s;
    while(cin>>n>>t)
    {
        b = 0;
        c = 0;
        int a[n+5];
        memset(a,1,sizeof(a));
        for(i = 1; i < n; i++)
        {
            cin>>a[i];

        }
        for(i = 1; i <= n; i+= a[i])
        {
            if(i == t)
            {
                cout<<"YES\n";
                c = 1;
                break;
            }
        }
        if(c == 0)
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
