/*============================================================================**
*	Filename: main.cpp
*	Author:	  Akasaka
*	Date:     2017/++/++
*	Remarks:
**============================================================================*/

#define Akasaka

#include <bits/stdc++.h>

#include <iostream>

using namespace std;

const int _max=100+10;
char a[10],b[_max][10];
int n;
bool f,r;

int main()
{
    scanf("%s%d",a,&n);
    for(int i=0;i<n;i++)scanf("%s",b[i]);
    for(int i=0;i<n;i++)
    {
        if(b[i][0]==a[0]&&a[1]==b[i][1]) return 0*printf("YES\n");
        if(b[i][0]==a[1]&&a[0]==b[i][1]) return 0*printf("YES\n");
        if(b[i][0]==a[1]) f=1;
        if(b[i][1]==a[0]) r=1;
    }
    if(r&&f) printf("YES\n");
    else printf("NO\n");
    return 0;
}

/*============================================================================**
*       #include <ctime>                                                       *
*       clock_t TIME_START, TIME_END;                                          *
*       TIME_STRAT = clock();                                                  *
*       code balabalba                                                         *
*       TIME_END = clock();                                                    *
*       printf("%d/%d",TIME_END - TIME_START,CLOCKS_PER_SEC);                  *
**============================================================================*/

