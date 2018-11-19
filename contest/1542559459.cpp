#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define X first
#define Y second
using namespace std;
int a[20];
int main()
{
    int i,j,k,n,val;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        for(j=0,val=0;j<k;j++)
        {
            int temp;
            cin>>temp;
            val=val+temp*(1<<j);
        }
        a[val]=1;
    }
    int N=(1<<(1<<k));
    for(i=1;i<N;i++)
    {
        int c[4]={0},count=0;
        for(j=0;j<(1<<k);j++)
            if(i&(1<<j) && a[j]==1)
            {
                count++;
                for(int temp=0;temp<k;temp++)
                    if(j&(1<<temp))
                        c[temp]++;
            }
        for(j=0;j<k;j++)
            if(c[j]>count/2) break;
        if(j==k&&count!=0)
        {
            //cout<<i<<" ";
            cout<<"YES";return 0;
        }
    }
    cout<<"NO";
    return 0;
}