#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265
static const int INF = 0x3f3f3f3f;
static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;


    int main()
    {
        int h,mn,ss,t1,t2;
        scanf("%d %d %d %d %d",&h,&mn,&ss,&t1,&t2);
        int inn = 0;
        int out = 0;
        if( t1 == 12)
            t1 = 0;
        if( h == 12)
            h = 0;
        if(t2 == 12)
            t2 = 0;
        if( t1 > t2)
            swap(t1,t2);
        if( h > t1 && h < t2)
            inn++;
        else if(  h == t1 && (mn >0 || ss > 0))
        {
            inn++;

        }
        else
            out++;
        if( mn/5 > t1 && mn/5 < t2)
        {
            inn++;
        }
        else if( mn/5 == t1 )
        {
            inn++;

        }
        else if( mn/5 == t2 )
        {

            out++;
        }
        else
            out++;
        if( ss/5 > t1 && ss/5 < t2)
        {
            inn++;
        }
        else if( ss/5 == t1 && ss%5 != 0 )
        {
            inn++;

        }
        else
            out++;
        if( out == 3 or inn == 3)
            printf("yes\n");
        else
            printf("no\n");
        return 0;



    }
