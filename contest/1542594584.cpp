#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

char ps[4];
char words[111][4];
int n;


int main()
{
    scanf("%s", ps);
    scanf("%i", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
        if (!strcmp(ps, words[i]))
        {
            printf("YES");
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ps[0] == words[i][1] && ps[1] == words[j][0])
            {
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}