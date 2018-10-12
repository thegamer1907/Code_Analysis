#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,c=0,index=0,sum=0;
    cin>>n>>t;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        if(sum>t)
        {
            sum=sum-a[index];
            index++;
        }
        else c++;
    }
    cout<<c;
}
