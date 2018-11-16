#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    char s[120];
    while(scanf("%s",s)!=EOF)
    {
        int i=1,cnt=1;
        while(s[i]!='\0')
        {
            if(s[i]==s[i-1])
                cnt++;
            else
                cnt=1;
            if(cnt==7)
                break;
            i++;
        }
        if(cnt==7)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
