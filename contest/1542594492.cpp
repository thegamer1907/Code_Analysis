#include<bits/stdc++.h>
using namespace std;

char pw[22], in[111][22];

int main()
{
    int n;
    scanf("%s%d",pw,&n);
    for(int i=0;i<n;i++)
        scanf("%s",in[i]);
    for(int i=0;i<n;i++)
    {
        if(strcmp(in[i],pw)) continue;
        puts("YES");
        return 0;
    }
    bool a = 0, b = 0;
    for(int i=0;i<n;i++)
    {
        if(in[i][0] == pw[1]) a = true;
        if(in[i][1] == pw[0]) b = true;
    }
    puts(a&&b?"YES":"NO");
}
