#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    char s[200000];
    int a[200000]={0},d=0,i,l,r,m,n=0;
    cin>>s;
    cin>>m;
    while(s[n]!=0)
    {
        n++;
    }
    for(i=0;i<=n;i++)
    {
        if(s[i]==s[i-1])
        {
            a[i]=++d;
        }else
        {
            a[i]=d;
        }
        
    }
    for(i=0;i<m;i++)
    {
        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<endl;
    }
    
    
    return 0;
}