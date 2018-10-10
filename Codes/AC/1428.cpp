#include <bits/stdc++.h>
using namespace std;
vector<long long> a,v;
int n,s,x;
long long sum;
bool can(long long k){
    sum=0;
    for(long long i=0;i<n;i++)
        v[i]=a[i]+(i+1)*k;
    sort(v.begin(),v.end());
    for(int i=0;i<k;i++) sum+=v[i];
    return sum<=s;
}
int main()
{
    cin>>n>>s;
    a.resize(n);
    v.resize(n);
    for(int i=0;i<n;i++){
        cin>>x;
        a[i]=x;
    }
    int lo=0,hi=n,mid;
    while(lo<hi){
        mid=(lo+hi+1)/2;
        if(can(mid)) lo=mid;
        else hi=mid-1;
    }
    sum=0;
    for(int i=0;i<n;i++)
        v[i]=a[i]+(i+1)*lo;
    sort(v.begin(),v.end());
    for(int i=0;i<lo;i++) sum+=v[i];
    cout<<lo<<' '<<sum;
}
