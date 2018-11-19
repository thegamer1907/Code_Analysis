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
    int x,y,z;

    bool operator<(const P &a)const{
       // if(y!=a.y)
       // return y>a.y;
       return x>a.x;
//        return z>a.z;
    }
};
//vector<int> v[20056],v1[20020];

int a,b,c,i,k,o[20010002],n,m,d,e,dy[15]={0,0,-1,1,-1,1,-1,1},dx[15]={-1,1,0,0,1,1,-1,-1};
int l[100100][51];
long long x,y,z,v1,v2;
P u[200600];
int j[60];
queue<int> q,q1;
stack<int> s;
//queue<P> q;

//deque<int> d;
//'1'==49;
//'A'==65;
//'a'==97;
map<int, int > p;
string r,r1,r2;
//char r[5000];

bool as(int a,int b)
{
     return a>b;

}

int f(int t,int w)
{
    int u=1987654321;
    for(;t<w;)
    {
        if(t%2) u=min(u,o[t]),t++;
        else if(w%2==0) u=min(u,o[w]),w--;
        else w/=2,t/=2;
    }
    return min(u,o[t]);
    return u;
}

//2147483647
int main()
{
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    n=c+60*b+a*3600;
    m=b*6*120+c*12;
    c*=6*120;
    n*=2;
    m*=2;
    c*=2;
    n%=(360*120*2);
    m%=(360*120*2);
    c%=(360*120*2);
    o[n]=1;
    o[m]=2;
    o[c]=3;
    for(int t=min(n,min(m,c))+1;t!=min(n,min(m,c));t++,t%=(360*120*2))
    if(o[t]==0)
    o[t]=o[(t-1+360*120*2)%(360*120*2)];
    d*=(30*120*2);
    e*=(30*120*2);
    d%=(360*120*2);
    e%=(360*120*2);
    if(o[d]==o[e]||o[(d+360*120*2-1)%(360*120*2)]==o[e]||o[(d+1)%(2*360*120)]==o[e]||o[(e-1+2*360*120)%(2*360*120)]==o[d]||o[(e+1)%(2*360*120)]==o[d])
        puts("YES");
    else puts("NO");
}

