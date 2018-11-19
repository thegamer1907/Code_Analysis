#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[5],q[5];
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    int tag=0,tag1=0,tag2=0;
    for(int i=0;i<n;i++)
    {
        scanf("%s",q);
        if(q[0]==s[0]&&q[1]==s[1])
            tag=1;
        if(q[0]==s[1])
            tag1=1;
        if(q[1]==s[0])
            tag2=1;
    }
    if((tag1==1&&tag2==1)||tag==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
