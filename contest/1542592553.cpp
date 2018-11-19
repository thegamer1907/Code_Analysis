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
const int maxn=100+10;
char s[maxn],s1[maxn];
int main()
{
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    bool f=false,f1=false,f2=false;
    rep(i,1,n+1)
    {
        scanf("%s",s1);
        if(s1[0]==s[0]&&s1[1]==s[1])
        {
            f=true;
        }
        if(s1[1]==s[0]) f1=true;
        if(s1[0]==s[1]) f2=true;
    }
    if(f||(f1&&f2))
    {
        puts("YES");
    }
    else puts("NO");
    return 0;
}











