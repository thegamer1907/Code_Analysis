#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int maxn=1e5+5;

ll ma[maxn];

int main()
{
    ll n,m,k,d;

    scanf("%lld%lld%lld",&n,&m,&k);
    for(int i=0; i<m; i++)
    {
        scanf("%lld",&d);
       // v.push_back(d);
        ma[i]=d;
    }
    ll sum=0,res=0,ans=0;
    int flag=0,fla=0;
    ll now=k;
    if(ma[0]>k)
    {
        if(ma[0]%k==0)
        {
            now=ma[0];
        }
        else
        {
            now=(ma[0]/k+1)*k;
        }
    }
    for(int i=0; i<m;)
    {
        if((ma[i]-res)<=now)
        {
            flag=1;
            ans++;
            i++;
        }
        else
        {
            res=ans;
            if(ma[i]-res>now)
            {
                int st=1,en=1e9;
                while(st!=en)
                {
                    int md=(st+en)/2;
                    if((ll)md*k>=ma[i]-res)en=md;
                    else st=md+1;
                }
                now=st*k;
               // now+=k;
            }
            if(flag)
            {
                sum++;
                flag=0;
            }
        }
    }
    cout<<sum+1<<endl;
    return 0;
}