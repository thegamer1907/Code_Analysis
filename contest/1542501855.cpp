#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n;
    char a[3];
    cin>>a;
    char rev[3];
    rev[0]=a[1];
    rev[1]=a[0];
    rev[2]='\0';
    cin>>n;
    int flag=0;
    int front=0;
    int back=0;
    char bark[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>bark[i];
        if(strcmp(bark[i],a)==0 || strcmp(bark[i],rev)==0)
        {
            flag=1;
        }
        if(bark[i][1]==a[0])
        {
            front=1;
        }
        if(bark[i][0]==a[1])
        {
            back=1;
        }
    }
    if(flag==1||  (front*back)==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}   
