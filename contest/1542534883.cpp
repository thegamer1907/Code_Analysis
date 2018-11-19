#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <bitset>
#include <set>
#include <list>
#include <deque>
#include <map>
#include <queue>
#define mod 1000000007
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
using namespace std;
typedef long long ll;
const double PI=3.14159265358979;
const double eps=1e-6;
const ll _INF=1e18;
const int INF=1e9;
const int maxn=1000010;
const int maxm=1000010;

int h,m,s,t1,t2;
int a[12],b[12],c[12];
bool isok;

int main()
{
    while(~scanf("%d %d %d %d %d",&h, &m, &s, &t1, &t2)){
        if(h==12)   h=0;
        if(t1==12)  t1=0;
        if(t2==12)  t2=0;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
        if(s%5) c[s/5]=c[(s/5+1)%12]=2;
        else    c[s/5]=1;
        if(m%5)    b[m/5]=b[(m/5+1)%12]=2;
        else{
            if(!s)  b[m/5]=1;
            else    b[m/5]=b[(m/5+1)%12]=2;
        }
        if(!s&&!m)  a[h%12]=1;
        else    a[h%12]=a[(h+1)%12]=2;
        /*for(int i=0;i<12;++i)
            if(a[i]||b[i]||c[i])
                printf("bug:%d\n",i);*/
        isok=false;
        for(int i=t1;;i=(i+1)%12){
            if(i==t2){
                isok=true;
                break;
            }
            bool tmp=true;
            if(a[i]==1 || a[(i+1)%12]==1)
                tmp=false;
            if(a[i]==2 && a[(i+1)%12]==2)
                tmp=false;
            if(b[i]==1 || b[(i+1)%12]==1)
                tmp=false;
            if(b[i]==2 && b[(i+1)%12]==2)
                tmp=false;
            if(c[i]==1 || c[(i+1)%12]==1)
                tmp=false;
            if(c[i]==2 && c[(i+1)%12]==2)
                tmp=false;          
            if(!tmp)   break;
        }
        for(int i=t1;;i=(i+11)%12){
            if(i==t2){
                isok=true;
                break;
                puts("ok");
            }
            bool tmp=true;
            if(a[i]==1 || a[(i+11)%12]==1)
                tmp=false;
            if(a[i]==2 && a[(i+11)%12]==2)
                tmp=false;
            if(b[i]==1 || b[(i+11)%12]==1)
                tmp=false;
            if(b[i]==2 && b[(i+11)%12]==2)
                tmp=false;
            if(c[i]==1 || c[(i+11)%12]==1)
                tmp=false;
            if(c[i]==2 && c[(i+11)%12]==2)
                tmp=false;          
            if(!tmp)   break;
        }
        puts(isok?"YES":"NO");
    }
    return 0;
}