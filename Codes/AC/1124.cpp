#include<bits/stdc++.h>

using namespace std;

pair<long long,long long> f[100005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n,d,l,r,fsum=0,res=0;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>f[i].first>>f[i].second;
    }
    sort(f,f+n);

    for(l=r=0;r<n;r++)
    {
        fsum+=f[r].second;
        while(f[r].first-f[l].first>=d)
        {
            fsum-=f[l].second;
            l++;
        }
        res=max(res,fsum);
    }
    cout<<res<<endl;
    return 0;
}