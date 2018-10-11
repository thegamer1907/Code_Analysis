#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cmath>

using namespace std;

const int MAXN = 100010;

char ch;
long long na,nb,nc,pa,pb,pc,ma,mb,mc;
long long r,Answer = 0,maxans;

bool Work(long long k)
{
    long long a = ma*k,b = mb*k,c = mc*k;
    a -= na;b -= nb;c -= nc;
    if (a < 0) a = 0;
    if (b < 0) b = 0;
    if (c < 0) c = 0;
    if (a*pa + b*pb + c*pc <= r) return 1;
    return 0;
}

long long BinarySearch(long long l,long long r)
{
    if (l == r) return l;
    long long m = (l+r+1) >> 1;
    if (Work(m)) return BinarySearch(m,r);
    else return BinarySearch(l,m-1);
}

int main()
{
    //freopen("in","r",stdin);
    ma = mb = mc = 0;
    while(scanf("%c",&ch),ch!='\n')
    {
        if (ch == 'B') ma++;
        else if (ch == 'S') mb++;
        else mc++;
    }
    scanf("%d%d%d",&na,&nb,&nc);
    scanf("%d%d%d",&pa,&pb,&pc);
    cin >> r;
    if (ma == 0)
    {
        na = r+max(nb,nc);
        ma = 1;
    }
    if (mb == 0)
    {
        nb = r+max(na,nc);
        mb = 1;
    }
    if (mc == 0)
    {
        nc = r+max(nb,nc);
        mc = 1;
    }
    Answer += min(na/ma,min(nb/mb,nc/mc));
    na -= ma*Answer;
    nb -= mb*Answer;
    nc -= mc*Answer;
    maxans = r+max(na,max(nb,nc));
    Answer += BinarySearch(0,maxans);
    cout << Answer << endl;
    return 0;
}
