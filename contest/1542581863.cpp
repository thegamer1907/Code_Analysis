#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <cstdio>
#include <stack>
#include <vector>
#include <map>
#include <ctime>
#include <cmath>
#include <string.h>
#define inf 0x7fffffff
using namespace std;
struct P
{
    int x,y;

    bool operator<(const P &a)const{
       // if(y!=a.y)
       // return y>a.y;
       return x>a.x;
//        return z>a.z;
    }
};
//vector<int> v[20056],v1[20020];
int a,b,c,n,m,i,k,o[100002][20],d,e,dy[15]={0,0,-1,1,-1,1,-1,1},dx[15]={-1,1,0,0,1,1,-1,-1};
int l[51];
//long long x,y,z[10055];
//P u[600];
int j[60];
//queue<int> q,q1;
//stack<int> s;
//queue<P> q;
//long long x=0,y=0,z[99];

//deque<int> d;
//'1'==49;
//'A'==65;
//'a'==97;
map<int, int > p;
string r[222],r1;
//char r[5000][1111];

bool as(P a,P b)
{
     return a.y<b.y;

}
int g(int t)
{
    if(t<2) return t;
    return t%2+g(t/2);
}


//2147483647
int main()
{
    scanf("%d %d",&a,&b);
    for(int t=1;t<=a;t++)
    {
        i=0;
        for(int w=1;w<=b;i<<=1,i+=o[t][w],w++)
        scanf("%d",&o[t][w]);
        l[i]=1;
    }
    if(l[0])
    {
        puts("YES");
        return 0;
    }
    for(int t=0;t<16;t++)
        if(l[t])
        for(int w=0;w<16;w++)
            if(l[w]&&(t&w)==0)
        {
            puts("YES");
            return 0;
        }
    puts("NO");
}
