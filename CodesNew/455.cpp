#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll n,m,i,j,k,fre,a,sum=0,cnt=0,mx=0;
    vector<ll>v;
    cin>>n>>fre;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int start=0;
    for(i=0;i<n;i++)
    {
        sum+=v[i];
        cnt++;
        if(sum>fre)
        {
            sum-=v[start];
            sum-=v[i];
            cnt-=2;
            i--;
            start++;
        }
        if(sum<=fre)
        {
            mx=max(mx,cnt);
        }
    }
    cout<<mx<<endl;
    return 0;
}
