#include <bits/stdc++.h>

using namespace std;

long long arr[100002],temp[100002];

pair<bool,long long> ok(int n,long long k,int budget)
{
    int i;
    long long sum=0;
    for(i=0;i<n;i++)temp[i]=arr[i]+k*(i+1);
    sort(temp,temp+n);
    for(i=0;i<k;i++)
    {
        sum+=temp[i];
        if(sum>budget)return make_pair(false,0);
    }
    return make_pair(true,sum);
}

pair<int,int> binsearch(int n,int budget)
{
    int lo=0,hi=n,mid;
    pair<bool,long long>bi;
    pair<int,int>res;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        bi=ok(n,mid,budget);
        if(bi.first){res.first=mid;res.second=bi.second;lo=mid+1;}
        else hi=mid-1;
    }
    return res;
}

int main()
{
    int n,budget,i;
    pair<int,int>ii;
    while(scanf("%d%d",&n,&budget)==2)
    {
        for(i=0;i<n;i++)cin>>arr[i];
        ii=binsearch(n,budget);
        printf("%d %d\n",ii.first,ii.second);
    }
    return 0;
}
