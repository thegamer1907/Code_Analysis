#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[3000006];
int n,t;
int main()
{
    int i, v=1;
    cin>>n>>t;
    for(i=1;i<n;i++)
        cin>>a[i];
    bool f=0;
    while(v<=min(t,n))
    {
        if(v==t)
        {
            f=1;
            break;
        }
        v = v + a[v];
        // cout<<"v = "<<v<<endl;
    }
    if(f)
        cout<<"YES";
    else
        cout<<"NO";
}