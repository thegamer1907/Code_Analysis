#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<map>
using namespace std;
string str[110];
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    int t=n;
    for(int i=0;i<n;i++)
        cin>>str[i];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int t=0;
        if(str[i][0]==s[0])
            t=1;
        else if(str[i][1]==s[0])
            t=2;
        else if(str[i][0]==s[1])
            t=3;
        else if(str[i][1]==s[1])
            t=4;
        else
            continue;
        for(int j=0;j<=n;j++)
        {
            if(t==1)
            {
                if(str[j]==s)
                {
                    flag=1;
                    break;
                }
            }
            if(t==2)
            {
                if(str[j][0]==s[1])
                {
                    flag=1;
                    break;
                }
            }
            if(t==3)
            {
                if(str[j][1]==s[0])
                {
                    flag=1;
                    break;
                }
            }
            if(t==4)
            {
                if(str[j]==s)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            break;
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
