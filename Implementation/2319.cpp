
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

int main()
{
    char s1[10005];
    int n;
    while(cin>>n>>s1)
    {
       int ans=0;
       for(int i=1;i<n;i++)
       {
           if(s1[i]==s1[i-1])
            ans++;
       }
       printf("%d\n",ans);
    }
    return 0;
}
