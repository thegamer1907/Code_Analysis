#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    char s1[10],s2[10];
    int n;
    while(scanf("%s",s1)!=EOF)
    {
        int ans1=0,ans2=0;
        char a=s1[0],b=s1[1];
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%s",s2);
            if(s2[1]==a)  ans1=1;
            if(s2[0]==b)  ans2=1;
            if(a==s2[0]&&b==s2[1]) ans1=1,ans2=1;
        }
        if(ans1==1&&ans2==1)  printf("YES\n");
        else printf("NO\n");
    }
}
