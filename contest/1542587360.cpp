#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
typedef long long LL;
char str[3],s[110][3];

int main()
{
    scanf("%s",str);
    int flag=0, n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%s",s[i]);
        if(strcmp(s[i],str)==0) flag=1;
    }
    if(flag)
    {
        puts("YES");
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        if(s[i][1]==str[0])
        {
            for(int j=0; j<n; j++)
            {
                if(s[j][0]==str[1])
                {
                    flag=1;
                    puts("YES");
                    return 0;
                }
            }
        }
    }
    puts("NO");
    return 0;
}





























