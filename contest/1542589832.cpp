#include<bits/stdc++.h>
using namespace std;

#define ll long long int
ll n,m;
 ll fron[500011],bak[500011];
 ll lowbin1(ll low,ll high,ll val)
{
    while(low<=high)
    {
        ll mid=(low+high)/2;
        if(bak[mid]==val)
            return mid;
        if(mid-1 >= 0 && bak[mid] > val && bak[mid-1] < val)
            return mid-1;
        else if(mid+1 < n && bak[mid] < val && bak[mid+1] > val)
            return mid;
        else if(bak[mid]>val)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}
ll lowbin(ll low,ll high,ll val)
{
    while(low<=high)
    {
        ll mid=(low+high)/2;
        if(fron[mid]==val)
            return mid;
        if(mid-1 >= 0 && fron[mid] > val && fron[mid-1] < val)
            return mid-1;
        else if(mid+1 < n && fron[mid] < val && fron[mid+1] > val)
            return mid;
        else if(fron[mid]>val)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,sum,i,j,k,l,r,x,y,q,in;
    string s;
    char a[1000][100];
    cin>>s;
    cin>>n;
    ll temp=0;
    ll temp1=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(s[0]==a[i][0])
            {
                if(s[1]==a[i][1])
                temp=1;
                else
                    temp1=1;
            }
    }
    if(temp)
    {
        cout<<"YES\n";
        return 0;
    }
    temp1=0;
    for(i=0;i<n;i++)
    {
        if(s[0]==a[i][1])
            {
                    temp1=1;
            }
    }
    if(temp1)
    {
        temp1=0;
        for(i=0;i<n;i++)
    {
        if(s[1]==a[i][0])
            {
                    temp1=1;
            }
    }
    if(temp1)
    {
        cout<<"YES\n";
        return 0;
    }
}
cout<<"NO\n";
   return 0;
  }