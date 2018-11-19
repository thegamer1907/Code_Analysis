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

set<int> si;

int a[5];
int b[5];
int t1, t2;

void output(int x[], int n)
{
    printf("Start:\n");
    for(int i = 0; i < n; i++) printf("%d ", x[i]);
    printf("\nEnd\n");
}

int main()
{
    for(int i = 0; i < 5; i++)scanf("%d", a + i);
    a[0] *= 30, a[1] *= 6, a[2] *= 6, a[3] *= 30, a[4] *= 30;
    t1 = a[3] % 360, t2 = a[4] % 360;
    if(t1 > t2)swap(t1, t2);
    if(a[2])a[1] = (a[1] + 1) == 60 ? a[1] : a[1] + 1;
    if(a[1])a[0] = a[0] + 15;
//    output(a, 5);
//    printf("t1=%d t2=%d\n", t1, t2);
    for(int i = 0; i < 5; i++) a[i] %= 360, si.insert(a[i]);
    int bl = 0;
    for(set<int>::iterator it = si.begin(); it != si.end(); it++)b[bl++] = *it;
//    output(b, bl);
    if(t2 == b[(lower_bound(b, b + bl, t1) - b) + 1] || t2 == b[(lower_bound(b, b + bl, t1) - b + bl - 1) % bl]) printf("YES\n");
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

