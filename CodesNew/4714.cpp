#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define mem(a,x) memset(a,x,sizeof(a))
int a[10000007];
long long int c1=0;
vector<int> v2;
lli p;
typedef pair<lli,lli> ll;
bool cmp(string s,string p)
{
    if(s.length()==p.length())
    return s<p;
    return s.length()<p.length();
}
int a1[1000007];
int flag=1;
void dfs(vector<int> v[],int y)
{
    if(y==p)
    a1[y]=1;
    a[y]=1;
    for(int j=0;j<v[y].size();j++)
    {
        if(a[v[y][j]]==0)
        {
            if(a1[y]==1)
            a1[v[y][j]]=0;
            else
            a1[v[y][j]]=1;
            dfs(v,v[y][j]);
        }
                if(a1[y]==a1[v[y][j]])
                flag=0;
    }
}
int a2[1000000];
main()
{
    lli k,x,y;x=-1;
    int n;
    int c=0;
    int c1=0;
    cin>>n;
    map<lli,int> m;
    vector<lli> a(n,0);
    int a1[n];
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        a[i-1]=x;
        a1[i-1]=x;
        m[x]++;
    }
    sort(a.begin(),a.end());
    lli s=0;
    mem(a2,0);
    for(int i=1;i<=n/2;i++)
    {
     if(lower_bound(a.begin()+n/2,a.end(),2*a[i-1])!=a.end())
     {
         *lower_bound(a.begin()+n/2,a.end(),2*a[i-1])=-1;
     }
     else
     s+=1;
    }
    if(n%2==0)
    cout<<s+n/2;
    else
    cout<<s+(n+1)/2;
}