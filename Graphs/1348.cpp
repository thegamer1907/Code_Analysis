#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,t,i,cell=1,flag=0;
    int a[30001];
    cin>>n>>t;
    for(i=1;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;)
    {
        cell=cell+a[i];
        if(cell==t)
        {
            flag=1;
            break;
        }
        if(cell>t)
        {
            break;
        }
        i=cell;
    }
    if(flag==1)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
return 0;
}