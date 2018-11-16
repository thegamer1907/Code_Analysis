#include <bits/stdc++.h>


using namespace std;

string itos(long long x)
{
string s;
while (x || !s.length())
{
s=(char)(x % 10 +48) + s;
x/=10;
}

return s;
}


long long fact(long long x)
{
if (x==0)
return 1; else return
x*fact(x-1);
}



struct T
{
int x;
int y;
int z;
};
bool co(int a , int b)
{
return a>b;
}

#define pb push_back
#define ll long long
#define ld long double
#define mp make_pair
#define fi first
#define se second
#define pi 3.14159265358979323846
#define pii pair < int , int >
int inf=1000000009;
vector < vector < int > > d(2002, vector< int > ());
int ma=0;
int c[2002]={};
void dfs(int v)
{
if (c[v]>ma)
ma=c[v];
//cout<<c[v]<<" "<<v<<endl;;
for (int i=0; i<d[v].size(); i++)
if (c[d[v][i]]==-1)
{
c[d[v][i]]=c[v]+1;
dfs(d[v][i]);
}
}



int main() {

ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

// freopen("traffic.in","r",stdin);
// freopen("traffic.out","w",stdout);
int n,m,k,l,p;
cin>>n;
vector < int > df;
for (int i=0; i<n; i++)
{
int x;
cin>>x;
if (x==-1)
df.pb(i); else
d[i].pb(x-1),d[x-1].pb(i);
}
for (int i=0; i<n; i++)
    c[i]=-1;

for (int i=0; i<df.size(); i++)
c[df[i]]=0,dfs(df[i]);

cout<<ma+1;
}
