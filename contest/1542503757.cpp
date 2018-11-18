#include<bits/stdc++.h>
#define EXP 1e-6
#define MAX -1000000000000
#define INF 0x3f3f3f3f
#define maxn 105
#define abc(x) ((x >= 0) ? x : -x)
using namespace std;
char words[maxn][5];
int main()
{
    //ios::sync_with_stdio(false);
    //freopen("D:\\input.txt", "r", stdin);
    //freopen("D:\\output.txt", "w", stdout);
    char s[5];
    scanf("%s", s);
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n ;++i)
    {
        scanf("%s", words[i]);
    }
    for(int i = 0; i < n; ++i)
    {
        if(!strcmp(s, words[i]))
        {
            printf("YES\n");
            return 0;
        }
    }
    for(int i = 0; i < n;++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(words[i][1] == s[0] && words[j][0] == s[1])
            {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}
