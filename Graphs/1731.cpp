#include<bits/stdc++.h>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    int n,t,i;
    cin>>n>>t;
    int a[n];
    for(i=1; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i+=a[i])
    {
        if(i==t)
        {
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";

    return 0;


}

