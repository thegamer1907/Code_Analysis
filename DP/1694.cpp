#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100010];
    int i,len,c=0,ans=0,ans1=0;
    cin>>s;

    if(strstr(s,"BA") && strstr(strstr(s,"BA")+2,"AB"))
        printf("YES\n");
    else if(strstr(s,"AB") && strstr(strstr(s,"AB")+2,"BA"))
       printf("YES\n");
    else
        printf("NO\n");
}
