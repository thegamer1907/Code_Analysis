#include <iostream>
#include <map>
using namespace std;
map < pair <long long,long long > , long long> m;
map <long long,long long> occ;
int main()
{
    long long n,k;
    long long i;
    cin>>n>>k;

    if(k==1)
    {
        int y;
        for(i=1;i<=n;i++)
            cin>>y,occ[y]=occ[y]+1;
        long long ans=0;
        for(auto x: occ)
        {
            ans+= (x.second*(x.second-1)*(x.second-2) )/6;
        }
        cout<<ans<<"\n";
        return 0;
    }
    long long cnt=0;
    for(i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            cnt++;
            continue;
        }
        occ[x]=occ[x]+1;
      //  cout<<occ[x]<<"\n";
        m[{x,1}]=occ[x];
        if(x%k==0)
        {
            m[{x,2}] = m[{x,2}] + m[{x/k,1}];
        }
        if(x%(k*k)==0)
        {
            m[{x,3}] = m[{x,3}] + m[{x/(k),2}];
        }
       // cout<<x<<"  :"<<m[{x,1}]<<" "<<m[{x,2}]<<" "<<m[{x,3}]<<"\n";
    }
    long long ans=0;
    for(auto x: m)
    {
        if(x.first.second==3)
            ans+=x.second;
    }
    ans+= ( cnt*(cnt-1)*(cnt-2) )/6;
    cout<<ans;
    return 0;
}
