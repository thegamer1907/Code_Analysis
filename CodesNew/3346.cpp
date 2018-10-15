#include<bits/stdc++.h>
#include<climits>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    int max=INT_MIN;
    
    int temp,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        sum+=temp;
        if(temp>max)
        max=temp;
    }
    
    sum=(n*max)-sum;
    int ansmax, ansmin;
    ansmax=max+m;
    if (m<=sum)
        ansmin=max;
    if(m>sum)
    {
        m-=sum;
        if(m%n==0)
            temp=m/n;
        else
            temp=m/n+1;
        ansmin=temp+max;
    }
    cout<<ansmin<<" "<<ansmax;
    return 0;
}