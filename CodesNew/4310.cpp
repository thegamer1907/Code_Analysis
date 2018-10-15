#include <iostream>
#include<cstdio>
#include<cstring>
#include<string>

#define MAXN 500005

using namespace std;

string s[MAXN];
int len[MAXN];

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=n-1;i>0;i--)
    {
        if(s[i]<s[i-1])
        {
            for(int j=0;j<s[i-1].length();j++)
            {
                if(s[i][j]<s[i-1][j])
                {                   
                   s[i-1]=s[i-1].substr(0,j);
                    break;
                }
            }            
        }
    }
    for(int i=0;i<n;i++)
        cout<<s[i]<<endl;
    return 0;
}