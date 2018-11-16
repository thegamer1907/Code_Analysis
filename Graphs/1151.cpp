#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n,t,s=0,i;
    cin>>n>>t;
    n--;
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;)
    {
        s=i+a[i-1];
        if(s==t)
        {
            cout<<"YES"<<endl;
            break;
        }
        i=s;
        if(s>t)
        {
           cout<<"NO"<<endl;
           break;
        }
    }
    return 0;
}
