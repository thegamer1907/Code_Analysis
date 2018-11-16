#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<bits/stdc++.h>
//using namespace std;

//long long que;1
int n, t;
char s[60], s1[60];
//int z[60];
int main()
{
    scanf("%d %d", &n, &t);
    scanf("%s", s);
    for(int v = 0; v < t; v++)
    {
        strcpy(s1, s);

        for(int i = 0; i < n - 1; i++)
        if(s1[i] == 'B' && s1[i + 1] == 'G')
        {
            s[i] = 'G';
            s[i + 1] = 'B';
        }
    }

    printf("%s", s);

    return 0;
}

