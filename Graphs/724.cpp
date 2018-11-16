#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n, t, i, j;

    scanf("%d %d", &n, &t);

    char ara[n], ch;
    scanf("%s", ara);

    for(i = 0; i < t; i++)
    {
        for(j = 0; j < n-1; j++)
        {
            if(ara[j] == 'B' && ara[j+1] == 'G')
            {
                ch = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = ch;
                j++;
            }
        }
    }

    printf("%s", ara);

    return 0;
}
