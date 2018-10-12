#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
string a[500050];
int len[500500];
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=n;i>=2;i--)
        {
            if(a[i]<a[i-1])
            {
                for(int j=0;j<a[i-1].length();j++)
                {
                    if(a[i-1][j]>a[i][j])
                    {
                        len[i-1]=j;
                        break;
                    }
                }
                string tmp;
                for(int j=0;j<len[i-1];j++)
                {
                    tmp+=a[i-1][j];
                }
                a[i-1]=tmp;
            }
        }
        for(int i=1;i<=n;i++)
        {
            cout<<a[i]<<endl;
        }
    }
}