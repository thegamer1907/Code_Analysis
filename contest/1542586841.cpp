#ifdef WSM
#include <bits:stdc++.h>
#else
#include <bits/stdc++.h>
#endif
#define mem(a) memset(a,0,sizeof(a));
using namespace std;
typedef long long ll;
const int N=7;
int main()
{
    char s[7];
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    int a=0,b=0;
    int flag=0;
    char ch[N];
    for(int i=0;i<n;i++)
    {
        scanf("%s",ch);
        if(!strcmp(ch,s)) flag=1;
        if(n==1)
        {
            if((s[0]==ch[0]&&s[1]==ch[1])||(s[0]==ch[1]&&s[1]==ch[0])) flag=1;
            break;
        }
        if(ch[1]==s[0]) a=1;
        if(ch[0]==s[1]) b=1;
    }
    if(a&&b) flag=1;
    if(flag) puts("YES");
    else puts("NO");
}
