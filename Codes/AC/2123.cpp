#include <bits/stdc++.h>
using namespace std;
long long int b[200005]={0};
long long int a[200005]={0};
int bsearch(long long int num,int n)
{
    int l=0,r=n-1;
    while(r-l>1)
    {
        int mid=(l+r)/2;
        if(b[mid]>num)
            r=mid;
        else if(b[mid]<num)
            l=mid;
        else
            return mid;
    }
    if(b[l]==num)
        return l;
    else if(b[r]==num)
        return r;
    else
        return -1;
}
long long int freq[200005][3]={0};
int main()
{

    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    int len=1;
    for(int i=1;i<n;i++)
    {
        if(b[i]!=b[i-1])
            b[len++]=b[i];
    }
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
        int pos1=bsearch(a[i],len);
        int pos2=bsearch(a[i]/k,len);
        if(pos2!=-1&&i>0&&a[i]%k==0)
        {
            ans+=freq[pos2][2];
            freq[pos1][2]+=freq[pos2][1];
        }
        freq[pos1][1]++;
        //cout<<i<<" "<<ans<<"\n";
    }
    cout<<ans;
    return 0;
}
