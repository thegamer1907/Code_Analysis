#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int cnt=0,sum,temp=0,j,n,k,m,i,s,t;
    cin>>n>>m>>k;
    long long int a[m];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    i=0;
    sum=s=k;
    while(i<m)
    {
        while(1)
        {
            temp=0;
            s=sum;
            while(i<m&&a[i]<=s)
            {
                temp=1;
                i++;
                sum++;
            }
            if(temp==1)
            {
                cnt++;
            }
            else
            {
                break;
            }
            //cout<<sum<<endl;
        }
        sum+=k;
    }
    cout<<cnt;
}