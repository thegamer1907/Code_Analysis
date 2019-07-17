#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false)

ll init[100005];
int main()
{
    IOS;
    ll n,m,k;
    cin>>n>>m>>k;
    ll kk=k;
    ll sum=0,t=0;
    for(int i=1; i<=m; i++)
        cin>>init[i];
    for(int i=1; i<=m; i++)
    {
        if(init[i]<=kk)
            t++;
        else
        {
            if(t!=0)
            {
                sum++;
                kk+=t;
                t=0;
            }
            else
            {
                kk+=k;
            }
            i--;
        }
    }
    if(t!=0)
        sum++;
    cout<<sum<<endl;
    return 0;
}