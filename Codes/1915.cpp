#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    long long k,arr[200002];
    long long cnt;
    map<long long,long long>l,r;
    while(cin>>n>>k)
    {
        for(i=0;i<n;i++)cin>>arr[i];
        if(n<3){cout<<0<<endl;continue;}
        l[arr[0]]++;
        for(i=2;i<n;i++)r[arr[i]]++;
        cnt=0;
        for(i=1;i<n-1;i++)
        {
            if(arr[i]%k==0&&l.find(arr[i]/k)!=l.end()&&r.find((long long)arr[i]*k)!=r.end())
                cnt+=(l[arr[i]/k]*r[arr[i]*k]);
            l[arr[i]]++;
            r[arr[i+1]]--;
        }
        cout<<cnt<<endl;
        l.clear();
        r.clear();
    }
    return 0;
}
