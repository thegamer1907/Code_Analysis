#include<cstdio>
#include<cstring>
#include<algorithm>
#include<map>
#include<string>
#include<queue>
using namespace std;
#define N 100010 
#define YES puts("YES")
#define NO puts("NO")

struct Point
{
	double x,y;
    Point(double _ = .0,double __ = .0):x(_),y(__) {}  
    Point operator +(const Point &a)const 
    {return Point(x+a.x,y+a.y);}  
    Point operator -(const Point &a)const 
    {return Point(x-a.x,y-a.y);}  
    Point operator *(double a)const 
    {return Point(x*a,y*a);}	
};

map <string,int> r;

priority_queue<int,vector<int>,less<int> >   A;//Big
priority_queue<int,vector<int>,greater<int> >B;//Small

int a[N][10];
int c[N];
int d[10];

int main()
{
	int n,k,w=0;
	scanf("%d%d",&n,&k);
    int e0=0,e1=0;
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            scanf("%d",&a[i][j]);
            c[i]+=a[i][j];
            d[j]+=a[i][j];
            w=max(w,d[j]);
        }
        e0+=(c[i]==0);
        e1+=(c[i]==1);
    }
    if(w==n){NO;return 0;}
	if(e1>0||e0>0){YES;return 0;}
    if(k<4){NO;return 0;}
    for(int i=1;i<=n;i++)
    {
        string s="";
        for(int j=1;j<=k;j++)
        {
            s+=char('0'+a[i][j]);
        }
        r[s]++;
    }

    if((r["1100"]>0&&r["0011"]>0)||(r["1010"]>0&&r["0101"]>0)||(r["1001"]>0&&r["0110"]>0))
    {YES;return 0;}
    else{NO;return 0;}
    return 0;
}