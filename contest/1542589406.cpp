#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int n;
    char pass[50];
    while(scanf("%s",pass)==1)
    {
        int n;
        scanf("%d",&n);
        char line[200][50];
        bool first=false;
        bool last=false;
        int i=1;
        while(i <= n)
        {
            scanf("%s",line[i]);
            if(strcmp(line[i], pass)==0)
            {
                first=true;
                last=true;
            }
            if(line[i][0]==pass[1]) last=true;
            if(line[i][1]==pass[0]) first=true;
            i++;
        }
        if(first==true && last==true) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
