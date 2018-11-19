#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <bitset>
#include <string>
#include <stack>
#include <cmath>
#include <queue>
#include <set>
#include <map>
using namespace std;
#define INF 0x3f3f3f3f
#define LC(x) (x<<1)
#define RC(x) ((x<<1)+1)
#define MID(x,y) ((x+y)>>1)
#define fin(name) freopen(name,"r",stdin)
#define fout(name) freopen(name,"w",stdout)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
typedef pair<int,int> pii;
typedef long long LL;
const double PI=acos(-1.0);

int main(void)
{
    double h,m,s,t1,t2;
    while (cin>>h>>m>>s>>t1>>t2)
    {
        double T1=360/12*t1;
        double T2=360/12*t2;
        m+=s/60;
        h+=m/60;
        double H=360/12*h;
        double M=360/60*m;
        double S=360/60*s;
        H=fmod(H,360.0);
        M=fmod(M,360.0);
        S=fmod(S,360.0);
        int flag = 0;
        if(T1>T2)
            swap(T1,T2);
        if(T1<=T2)
        {
            int cnt = 0;
            cnt+=(T1<=H&&H<=T2);
            cnt+=(T1<=M&&M<=T2);
            cnt+=(T1<=S&&S<=T2);
            if(cnt==0)
            {
                puts("YES");
            }
            else if(cnt==1)
            {
                puts("NO");
            }
            else if(cnt==2)
                puts("NO");
            else if(cnt==3)
                puts("YES");
        }
    }
    return 0;
}
