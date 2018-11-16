#include<bits/stdc++.h>
using namespace std;
#define INF INT_MAX
typedef long long int ll;
typedef int li;
int main()
{
    ll n,c=0,a[101],d=0,e;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            c+=1;
    }
    e=c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            d=c;
            for(int k=i;k<=j;k++)
            {
                if(a[k]==1)
                    d-=1;
                else
                    d+=1;
            }
            e=max(e,d);
        }
    }
    if(e==c)
        cout<<e-1;
    else
        cout<<e;
}
