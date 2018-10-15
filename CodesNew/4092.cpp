#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
int  n,q;
ll a[N],b[N];
int main()
{
    ll sum;
    int l,r;
    ios::sync_with_stdio(false);
    while(cin>>n>>q)
    {
        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i)
                a[i]+=a[i-1];
        }
        for(int i=0;i<q;i++)
            cin>>b[i];
            for(int i=0;i<q;i++)
            {
                sum+=b[i];
                l=upper_bound(a,a+n,sum)-a;
                r=n-l;
                if(r==0)
                {
                    r=n;
                    sum=0;
                }
                cout<<r<<endl;
            }
    }
}