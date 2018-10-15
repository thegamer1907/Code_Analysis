#include<bits/stdc++.h>
using namespace std;

#define ll                  long long int
#define llu                 long long unsigned
#define ld                  long double
#define fast                ios_base::sync_with_stdio(0);cin.tie(0);
#define endl                "\n"
#define pb                  push_back
#define bp                  pop_back
#define pf                  push_front
#define fp                  pop_front
#define pp                  pop_up
#define mp                  make_pair
#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define min4(a,b,c,d)       min(min(a,b),min(c,d))
#define max4(a,b,c,d)       max(max(a,b),max(c,d))
#define max5(a,b,c,d,e)     max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)     min(min3(a,b,c),min(d,e))
/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/
int main()
{
    fast;
    ll n,k,i,ans=INT_MIN,streak,memory;
    cin>>n>>k;
    ll a[n];
    queue<ll>q;
    for(i=0,streak=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            streak++;
        else
        {
            if(k-q.size()>0)
            {
                streak++;
                q.push(i);
            }
            else if(k)
            {
                streak=i-q.front();
                q.pop();
                q.push(i);
            }
            else
                streak=0;
        }
        if(streak>ans)
        {
            ans=streak;
            memory=i;
        }

    }
    //cout<<memory<<endl;
    cout<<ans<<endl;
    for(i=0;i<n;i++)
        if(i>memory-ans && i<=memory)
            cout<<"1 ";
        else
            cout<<a[i]<<" ";
    return 0;
}
