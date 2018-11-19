#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <queue>
#include <vector>
using namespace std;
char ch1[2];
int n;
int flag;
char ch2[110][2];
int main()
{
    cin>>ch1;
    cin>>n;
    int ff=0;
    for(int i=1;i<=n;i++)
    {
        cin>>ch2[i];
        if(strcmp(ch2[i],ch1)==0)
        {
            ff=1;
        }
    }
    if(ff)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    flag=0;
    for(int i=1;i<=n;i++)
    {
        if(ch2[i][1]==ch1[0])
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        if(ch2[i][0]==ch1[1])
        {
            flag=2;
        }
    }
    if(flag!=2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;

}
