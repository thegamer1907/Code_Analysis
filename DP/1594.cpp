/* DHUOJ solution #368762 @ 2018-11-12 14:48:04.141 */

#include<stdio.h>
#include<iostream>
#include<cstring>
#include<stack>
#include<queue>
#include<ctype.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<set>
using namespace std;
const int maxn = 1e5+5;
char s[maxn];
int main()
{   int a = 0,b = 0;
    cin>>s;
    int len = strlen(s);
    for(int i = 0;i<len;i++)
    {
        if(s[i]=='A'&&s[i+1]=='B') a++;
        if(s[i]=='B'&&s[i+1]=='A') b++;
    }
    if(!a||!b) puts("NO");
    else
    {
        if(a==1&&b==1)
        {
            if(strstr(s,"ABA")||strstr(s,"BAB")) puts("NO");
            else  puts("YES");
        }
        else if(a==2&&b==1&&strstr(s,"ABAB")) puts("NO");
        else if(b==2&&a==1&&strstr(s,"BABA")) puts("NO");
        else puts("YES");
    }

    return 0;
}