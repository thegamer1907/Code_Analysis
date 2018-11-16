#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char s[105];
    while(~scanf("%s",s))
    {
        int sum=0;
        for(int i=0;s[i]!='\0'&&sum<7;i++)
        {
           if(i==0)
            sum++;
           else if(s[i]==s[i-1])
            sum++;
           else
            sum=1;
        }
        if(sum==7)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
