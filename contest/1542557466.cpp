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

int a[3];
int h, m, s, t1, t2;

bool cmp(int l,int r)
{
//    printf("%d %d\n",l,r);
//    printf("%d %d %d\n", a[0], a[1], a[2]);
    int mx=a[0];
    if(l>=mx)mx=a[1];
    if(l>=mx)mx=a[2];
    if(l>=mx)mx=r+15;
    while(l+30<mx) l+=30;
//    printf("mx=%d a=%d\n",mx,l);
    return l>=r;
}


int main()
{
    scanf ("%d%d%d%d%d", a, a+1, a+2, &t1, &t2);
    a[2] *= 6, a[1] *= 6, a[0] *= 30, t1 *= 30, t2 *= 30;
    if(a[2] % 30)a[2] = a[2] - a[2] % 30 + 15;
    if(a[2] || a[1] % 30)a[1] = a[1] - a[1] % 30 + 15;
    if(a[1])a[0] += 15;
    a[0] %= 360, a[1] %= 360, a[2] %= 360, t1 %= 360, t2 %= 360;
    if(t1 > t2)swap(t1, t2);
    sort(a,a+3);

//    printf("%d %d %d\n", a[0], a[1], a[2]);
//    printf("%d %d\n", t1, t2);

    int ok=0;
    if(cmp(t1,t2)) ok=1;
    else
    {
        if(a[0]>t2)a[0]-=360;
        if(a[1]>t2)a[1]-=360;
        if(a[2]>t2)a[2]-=360;
        sort(a,a+3);
        t2-=360;
        if(cmp(t2,t1)) ok=1;
    }

    if (ok) printf ("YES\n");
    else printf ("NO\n");
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

