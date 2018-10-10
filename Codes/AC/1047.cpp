#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <stack>
#include <vector>
#include <set>
#include <queue>
using namespace std;
/***template***/
#define ll                   long long
#define dd                   double
#define scl(n)               scanf("%lld",&n)
#define scd(n)               scanf("%lf",&n)
#define pi                   pair<ll,ll>
#define pb                   push_back
#define mp                   make_pair
#define uu                   first
#define vv                   second
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define FOOR(i,a,b)          for(ll i=a;i<=b;i++)
#define LOP(i,a,b)           for(ll i=a;i<b;i++)
#define sorted(s)            sort(s.begin(),s.end())
#define reversed(s)          reverse(s.begin(),s.end())
#define contains(a,b)        (find((a).begin(), (a).end(), (b)) != (a).end())
#define MAXN                 105
#define pii                  3.1415926536
#define mod                  1000000007
#define eps                  0.0000000001
#define inf                  9000000000000000
#define mstt(a,b)            memset((a),(b),sizeof (a))
ll Set(ll n,ll pos)
{
    return n=n|(1<<pos);
}
ll reset(ll n,ll pos)
{
    return n=n&~(1<<pos);
}
bool check(ll n,ll pos)
{
    return (bool)(n&(1<<pos));
}
/***template***/
ll n,k;
string s;
ll cuma[1000004];
ll cumb[1000004];
ll binara(ll lagbe,ll high)
{
    ll low=0;
    ll mid;
    ll ind=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(cuma[mid]>=lagbe)
        {
            ind=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ind;
}
ll binarb(ll lagbe,ll high)
{
    ll low=0;
    ll mid;
    ll ind=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(cumb[mid]>=lagbe)
        {
            ind=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ind;
}
int main()
{
    scl(n);
    scl(k);
    cin>>s;
    if(k==0)
    {
        ll sum=0;
        ll maxi=-inf;
        LOOP(i,s.size())
        {
            if(i==0)
            {
                sum++;
                maxi=max(maxi,sum);
                continue;
            }
            if(s[i]==s[i-1])
            {
                sum++;
                maxi=max(maxi,sum);
            }
            else if(s[i]!=s[i-1])
            {
                sum=1;
            }

        }
        cout<<maxi<<endl;
    }
    else
    {
        ll maxa=-inf;
        ll maxb=-inf;
        LOOP(i,s.size())
        {
            if(s[i]=='b')
            {
                cuma[i]=1;
            }
            if(s[i]=='a')
            {
                cumb[i]=1;
            }
        }
        LOOP(i,s.size())
        {
            if(i==0)
            {
                continue;
            }
            cuma[i]=cuma[i-1]+cuma[i];
            cumb[i]=cumb[i-1]+cumb[i];
        }
//        LOOP(i,s.size())
//        {
//            cout<<cuma[i]<<" "<<cumb[i]<<endl;
//        }
        LOOP(i,s.size())
        {
            if(cuma[i]<=k)
            {
                maxa=max(maxa,i+1);
                continue;
            }
            else
            {
                ll lagbe=cuma[i]-k;
                ll index=binara(lagbe,i);
                index++;
                ll length=i-(index)+1;
                if(length>maxa)
                {
                    maxa=length;
                }
            }
        }
        LOOP(i,s.size())
        {
            if(cumb[i]<=k)
            {
                maxb=max(maxb,i+1);
                continue;
            }
            else
            {
                ll lagbe=cumb[i]-k;
                ll index=binarb(lagbe,i);
                //cout<<i<<" "<<index<<endl;
                index++;
                ll length=i-(index)+1;
                if(length>maxb)
                {
                    maxb=length;
                }
            }
        }
        cout<<max(maxa,maxb)<<endl;
    }
    return 0;
}
