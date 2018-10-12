#include<bits/stdc++.h>
#define ll long long
using namespace std;
int cnt,n,k,arr[1000000];

int main()
{
    int i,j,l,t,r,e;
    cin>>n>>k;

    for(i=0; i<n; i++)cin>>arr[i];
    ll sum=0;
    int cnt=1;
    t=0;
    int ma=0;
    for(j=0; j<n; j++)
    {
        cnt--;
        for(i=t; i<n; i++)
        {
            if(sum+arr[i]<=k)
            {
                sum+=arr[i];
                cnt++;
            }
            else
            {
                sum-=arr[j];
                break;
            }
        }
        ma=max(ma,cnt);
        t=i;
    }
    cout<<ma<<endl;
    return 0;
}
