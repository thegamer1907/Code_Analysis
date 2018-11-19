/**
*
* Author: Mouhanad
* Lang: GNU C++14
*
**/
#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define ii pair < int , int >
#define LS pair < ll , string >
typedef long long ll;
const int inf = 1<<30;
const int N =100100;
int n , a[N] , q ;
int main()
{
    int h,m,s; scanf("%d%d%d",&h,&m,&s);
    int ph=h , pm=m/5 , ps=s/5;
    if(pm == 0) pm=12;
    if(ps == 0) ps=12;


    int tt1,tt2;

     scanf("%d%d",&tt1,&tt2);

    int t=tt1;

    while(true){
         if(t == ph) break;

         if(t == pm) break;

        if(t == ps) break;


        t++;
        if(t == 13) t=1;

        if(t == tt2){
            printf("YES");
            return 0;
        }
    }

    t=tt2;

    while(1){

        if(t == ph) break;

        if(t == pm) break;

        if(t == ps) break;


        t++;

        if(t == 13) t=1;

        if(t == tt1){
            printf("YES");
            return 0;
        }
    }


    printf("NO");

    return 0;
}
