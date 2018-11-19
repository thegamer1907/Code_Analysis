#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define fi first
#define se second
#define dbg(...) cerr<<"["<<#__VA_ARGS__":"<<(__VA_ARGS__)<<"]"<<endl;
typedef vector<int> VI;
typedef long long ll;
typedef pair<int,int> PII;
const int inf=0x3fffffff;
const ll mod=1000000007;
const int maxn=20+10;
int main()
{
    int h,m,s,t1,t2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    if(t1>t2) swap(t1,t2);
    bool f=false;
    m/=5,s/=5;
    if(h>=t1&&h<t2&&m>=t1&&m<t2&&s>=t1&&s<t2) f=true;
    else if(h>=t1&&h<t2) f=false;
    else if(m>=t1&&m<t2) f=false;
    else if(s>=t1&&s<t2) f=false;
    else f=true;
    if(f) puts("YES");
    else puts("NO");
    return 0;
}











