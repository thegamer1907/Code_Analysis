#include <bits/stdc++.h>
using namespace std;
//using lint = long long;

struct P
{
    int x,y,z;

    bool operator<(const P &a)const{
              return z>a.z;
    }

};

vector<P> v2,v1;

//bitset<4001000> b;
int a,i,b,n,d,c,m,k;

long long o[31][100010];
int l[100010];
int j[100010];
int e;


int dx[10]={2,2,-2,-2,1,1,-1,-1},dy[10]={1,-1,1,-1,2,-2,2,-2};

//int dx[10]={0,1,0,-1,1,1,-1,-1},dy[10]={1,0,-1,0,1,-1,1,-1},dz[10]={0,0,0,0,1,-1};
long long mod=1000000007,mod2=1000000009,mod3=2017;
long long x,z,y;
double pi=3.14159265;
P u[1];
stack<int> s;
//set<int> s[222][22];
queue<int> q;

//2147483647
//'1'==49;
//'A'==65;
//'a'==97;
//unordered_
//map<int,int> p;
//list<int> l;


char r[2111];
//deque<int> de;
//srand((int)time(NULL));
bool as(P a,P b)
{
    return a.x<b.x;
}

void f(int i,int n,int m,int c,int d,long long z)
{
    if(n>m) return ;
    int h=(n+m)/2,s=0;
    //long long x=987654321987654321;
    for(int t=min(d,h);t>=c;t--)
    {
        z+=j[l[t]];
        if(o[i][h]>o[i-1][t-1]+z)
        {
            s=t;
            o[i][h]=o[i-1][t-1]+z;
        }
        j[l[t]]++;
    }
    int v=(n+h-1)/2;

    if(v<=h-1)
    {
        for(int t=c;t<=min(v,s);j[l[t]]--,z-=j[l[t]],t++);
        for(int t=h;t>v;j[l[t]]--,z-=j[l[t]],t--);



        //for(int t=s+1;t<=v;t++)
        //    z+=j[l[t]],j[l[t]]++;
        f(i,n,h-1,c,s,z);

        for(int t=c;t<=min(v,s);z+=j[l[t]],j[l[t]]++,t++);
        for(int t=h;t>v;z+=j[l[t]],j[l[t]]++,t--);
        //for(int t=v;t>s;t--)
        //    j[l[t]]--,z-=j[l[t]];
    }
    int p=(h+1+m)/2;
    if(p>=h+1)
    {
    for(int t=h+1;t<=p;z+=j[l[t]],j[l[t]]++,t++);
    for(int t=c;t<=min(p,d);j[l[t]]--,z-=j[l[t]],t++);
    f(i,h+1,m,s,d,z);

    for(int t=h+1;t<=p;j[l[t]]--,z-=j[l[t]],t++);
    for(int t=c;t<=min(p,d);z+=j[l[t]],j[l[t]]++,t++);

    }

    for(int t=min(d,h);t>=c;t--)
    {
        j[l[t]]--;
        z-=j[l[t]];
    }

}

int main()
{
    scanf("%d %d",&a,&b);
    for(int t=1;t<=a;t++)
        scanf("%d",&l[t]);
    memset(o,0x3f,sizeof(o));
    o[0][0]=0;
    for(int t=1;t<=b;t++)
    {
    f(t,t,a,t,a,0);
    //for(int w=1;w<=a;w++)
    //    printf("%lld ",o[t][w]);
    //puts("");
    }
    printf("%lld",o[b][a]);
}
/*
3 1
wda
agg
axf
*/
