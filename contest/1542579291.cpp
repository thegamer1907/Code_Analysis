#include <bits/stdc++.h>
using namespace std;

char pw[10],tmp[10];

int main()
{
    scanf(" %s",pw);
    int n;
    scanf("%d",&n);
    bool f1 = false;
    bool f2 = false;
    for(int i = 0; i < n; ++i)
    {
        scanf(" %s",tmp);
        if(strcmp(tmp,pw) == 0)
            f1 = f2 = true;
        if(tmp[0] == pw[1]) f1 = true;
        if(tmp[1] == pw[0]) f2 = true;
    }
    if(f1 && f2) printf("YES\n");
    else printf("NO\n");
    return 0;
}