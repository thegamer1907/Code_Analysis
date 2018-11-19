#include<set>
#include<map>
#include<stack>
#include<queue>
#include<ctime>
#include<cmath>
#include<vector>
#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<algorithm>
#define sc scanf
#define pr printf
#define MP make_pair
#define PB push_back
#define lson l,m,i<<1
#define rson m+1,r,i<<1|1
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;

typedef double db;
typedef long long ll;

int main()
{
    int h,m,s,t1,t2;
    while(~sc("%d%d%d%d%d",&h,&m,&s,&t1,&t2))
    {
        h%=12; t1%=12; t2%=12;
        h=h*3600+m*60+s;
        m=m*60+s;
        m*=12;
        s*=12*60;
        t1*=3600,t2*=3600;
        if(t1>t2) swap(t1,t2);
        bool f=0;
        if(t1<h && h<t2 && t1<m && m<t2 && t1<s && s<t2) f=1;
        if( (h<t1 || t2<h) && (m<t1 || t2<m) && (s<t1 || t2<s) ) f=1;
        pr("%s\n",f?"YES":"NO");
        //cout<<h<<" "<<m<<" "<<s<<endl;
        //cout<<t1<<" "<<t2<<endl;
    }
    return 0;
}
