#include <bits/stdc++.h>

using namespace std;

unsigned long long n,S;
unsigned long long arr[123456];
unsigned long long tmp[123456];
bool valid(unsigned long long r)
{
    unsigned long long sum=0;

    for(int i=0;i<n;i++) tmp[i]=1e17;

    for(int i=0;i<n;i++)
    {
        //if(r*(i+1)>S) return 0;
        tmp[i]=(r*(i+1))+arr[i];
    }
    sort(tmp,tmp+n);
    for(int i=0;i<r;i++)
    {
        sum+=tmp[i];
        //cout<<r<<" "<<sum<<endl;
        if(sum>S) return 0;
    }
    return sum<=S;

}

long long bs()
{
    long long s=0,e=n,mid;
    while(s<e)
    {
        mid=(s+e+1)/2;
        if(valid(mid)) s=mid;
        else e=mid-1;
    }
    return s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>S;
    unsigned long long sum=0,ans;
    for(int i=0;i<n;i++) cin>>arr[i];

    ans=bs();

    for(int i=0;i<n;i++) tmp[i]=1e17;

    for(int i=0;i<n;i++) tmp[i]=(ans*(i+1))+arr[i];

    sort(tmp,tmp+n);

    for(int i=0;i<ans;i++) sum+=tmp[i];

    cout<<ans<<" "<<sum<<endl;
    return 0;
}
