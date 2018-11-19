#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <time.h>
#include <string>
#include <set>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <bitset>
#include <ext/rope>
#include <algorithm>
#include <iostream>
using namespace std;
#define ll long long
#define minv 1e-6
#define inf 1e9
#define pi 3.1415926536
#define E  2.7182818284
const ll mod=1e9+7;//998244353
const int maxn=201;

int w=15;

int f[maxn][1<<(15+1)]={0},add[15+2];
int len,value;
string str,s,pre[maxn],post[maxn];

void work(int index,string a)
{
    int i,j,z;
    len=a.length();
    for (j=1;j<=w;j++)
    {
        value=0;
        z=(1<<(j-1))-1;
        for (i=0;i<len;i++)
        {
            value=(value<<1|(a[i]=='1'));
            if (i>=j-1)
            {
                f[index][value+add[j]]=1;
                value=value&z;
            }
        }
    }
}

int main()
{
    int n,q,Q,x,y,i;
    add[1]=0;
    for (i=2;i<=w+1;i++)
        add[i]=(1<<i)-2;

    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        cin>>str;
        work(i,str);
        len=str.size();
        if (len<=w)
            pre[i]=str;
        else
        {
            pre[i]=str.substr(0,w);
            if (len>=w+w)
                post[i]=str.substr(str.length()-w,w);
            else
                post[i]=str.substr(str.length()-len+w,len-w);
        }
    }

    scanf("%d",&q);
    for (Q=n+1;Q<=n+q;Q++)
    {
        scanf("%d%d",&x,&y);

        for (i=0;i<add[w+1];i++)
            f[Q][i]=f[x][i] | f[y][i];

        if (post[x].empty())
            str=pre[x];
        else if (post[x].length()<w)
            str=pre[x].substr(pre[x].length()-(w-post[x].length()),w-post[x].length())+post[x];
        else
            str=post[x];
        str+=pre[y];

        work(Q,str);

        str=pre[x]+post[x]+pre[y]+post[y];
        pre[Q]=str.substr(0,min(w,(int)str.length()));
        str.erase(0,min(w,(int)str.length()));
        post[Q]=str.substr(str.length()-min(w,(int)str.length()),min(w,(int)str.length()));

        for (i=0;i<add[w+1];i++)
            if (f[Q][i]==0)
                break;
        printf("%d\n",(int)(log(2+i+minv)/log(2))-1);
    }
	return 0;
}
/*
10

000

00100

0010110

111110

011001001110101111100011101

0110000

10

00100101110

11111000011

110011110110011011110

100

10 9

6 8

12 6

12 12

14 13

13 14

11 15

13 12

15 14

18 15

13 18

10 17

18 10

*/
