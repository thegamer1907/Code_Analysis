#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,i;
    cin>>n>>t;
    int ara[n];
    for(i = 1;i < n;i++)
    {
        cin>>ara[i];
    }

    ara[n] = 1;

    for(i = 1;i <= n; )
    {
        i += ara[i];
        if(i == t)
        {
            cout<<"YES"<<endl;
            return 0;
        }
       

    }
     cout<<"NO"<<endl;
    return 0;
}