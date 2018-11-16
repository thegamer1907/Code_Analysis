#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define sd second
#define fst first
#define lp(i,n) for(int x=i;x<n;x++)
#define pb push_back
#define mp make_pair
#define PI 3.14159265
#define maxn 100010
#define inf 0x3f3f3f3f
vector<int>g[10005];
int dy[8]= {1,0,-1,1,0,-1,1,-1};
int dx[8]= {1,1,1,-1,-1,-1,0,0};
map<int,int> vs;
bool st= 1 ;
LL res;
LL x;
int a[102];
int n;
bool valid(int v)
{
    LL res=0;
    for(int i=0;i<n;i++)
    {
        if(v-a[i]>0)
        res+=(v-a[i]);
    }
    if(res>=x)return 1;
    return 0;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;int t;
    cin>>n>>t;
    char s[n];for(int i=0;i<n;i++)cin>>s[i];
    while(t--)
    {
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<s[i];
    return 0;
}