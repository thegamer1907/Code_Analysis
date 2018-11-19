#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char> s1,s2;
    char a1,a2;
    int n;
    char s[10];
    scanf("%s",s);
    a1 = s[0];
    a2 = s[1];
    scanf("%d",&n);
    int flag = 0;
    char tmp[10];
    while(n--)
    {
        scanf("%s",tmp);
        if(!strcmp(tmp,s))
            flag=1;
        s1.insert(tmp[0]);
        s2.insert(tmp[1]);
    }

    if(s2.count(a1)!=0&&s1.count(a2)!=0||flag)
        puts("YES");
    else
        puts("NO");
    return 0;
}
