#include<bits/stdc++.h>                                                                  
#define hell 1000000000  
#define vi     vector<ll int>                                                             
#define ll long  long                                                                 
using namespace std;                                                                  
#define N  100005
vi v(N),dp(N);

int main()
{
    int n,c=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            b[i] = -1;
            c++;
        }
        else if(a[i]==0)
            b[i] = 1;
    }
    int sum[n];
    sum[0]= b[0];
    for(int i =1 ;i<n ;i++)
    {
        sum[i] = max(sum[i-1] + b[i],b[i]);
    }
    sort(sum,sum+n);
    cout<<sum[n-1]+c;
}
