#include <bits/stdc++.h>

using namespace std;
const int MAXN=1e4+7;
int n;
set<char> s1,s2;
char str[123],ps[123];
int main()
{
    scanf("%s%d",ps,&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",str);
        if(str[0]==ps[0]&&str[1]==ps[1])
        {
            return 0*puts("yes");
        }
        s1.insert(str[0]);
        s2.insert(str[1]);
    }
    if(s2.count(ps[0])&&s1.count(ps[1]))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}
