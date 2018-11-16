#include<iostream>
using namespace std;
int main()
{
    int n,t,i,sum;
    cin>>n>>t;
    int a[n];
    for(i=1;i<n;i++)
        cin>>a[i];
    for(i=1;i<n;i++)
    {
        sum=a[i]+i;
        i=sum-1;
        if(sum==t)
        {
            cout<<"YES";
            return 0;
        }
        if(sum>t)
        {
            cout<<"NO";
            return 0;
        }
    }
}
