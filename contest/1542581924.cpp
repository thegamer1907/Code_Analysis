#include <cstdio>
#include <cstring>
#include <iostream>
#define maxn 200
using namespace std;

char in[maxn][5];

char pa[5];
int main()
{
    // freopen("in" , "r", stdin);
    scanf("%s", pa);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", in[i]);
    }
    char no[5];
    for (int i = 0; i < n; i++)
    {
        if (strcmp(in[i], pa) == 0)
            {
                puts("YES");
                return 0;
            }
        no[0] = in[i][1];
        for (int j = 0; j < n; j++)
        {
            no[1] = in[j][0];   
            no[2] = 0;
            if (strcmp(no, pa) == 0)
            {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
    return 0;
}