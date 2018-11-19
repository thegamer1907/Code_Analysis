#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<cmath>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<time.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define lson l,mid,pos<<1
#define rson mid+1,r,pos<<1|1
typedef long long ll;
const int maxm=1000+5;
const int maxn=1000+5;
const int mod=1e9+7;
const int inf=0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3fLL;
const double eps=1e-8;
int h,m,s;
int tot=60*60*12;
int t[10];
int main()
{
    scanf("%d%d%d",&h,&m,&s);
    h=(h%12)*(tot/12)+(tot/12/60)*m+(tot/12/60/60)*s;
    m=m*(tot/60)+s*(tot/60/60);
    s=s*(tot/60);
    t[0]=h,t[1]=m,t[2]=s;
    sort(t,t+3);
    int t1,t2;
    scanf("%d%d",&t1,&t2);
    t1=(t1)*(tot/12);
    t2=(t2)*(tot/12);
    int pos1=upper_bound(t,t+3,t1)-t;
    int pos2=upper_bound(t,t+3,t2)-t;
    if (pos1%3==pos2%3)return 0*puts("YES");
    return 0*puts("NO");
}