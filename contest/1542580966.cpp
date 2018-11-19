/**
*
* Author: MARC
* Lang: GNU C++14
*
**/

#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define ii pair < int , int >
#define LS pair < ll , string >

typedef unsigned long long ull;
typedef long double ldbl;
typedef long long ll;
typedef double dbl;

const ldbl E = 2.71828182845904523536;
const ldbl pi = acos(-1);
const dbl eps = 1e-9;
const ll mod = 1e9+7;
const ll inf = 1LL<<30;

/** /////////// ** Code ** /////////// **/

const int N=100100;

int main()
{
    int h,m,s; scanf("%d%d%d",&h,&m,&s);
    int ph=h , pm=m/5 , ps=s/5;
    if(pm == 0) pm=12;
    if(ps == 0) ps=12;


    int t1,t2; scanf("%d%d",&t1,&t2);

    int t=t1;

    while(true){
        if(t == ph) break;
        if(t == pm) break;
        if(t == ps) break;


        t++;
        if(t == 13) t=1;

        if(t == t2){
            printf("YES");
            return 0;
        }
    }

    t=t2;

    while(true){
        if(t == ph) break;
        if(t == pm) break;
        if(t == ps) break;


        t++;
        if(t == 13) t=1;

        if(t == t1){
            printf("YES");
            return 0;
        }
    }


    printf("NO");

    return 0;
}
