#include <bits/stdc++.h>

#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define PI ( acos(-1.0) )
#define pmod 1000000007
#define maxn 100005
#define IN freopen("input.txt","r",stdin)
#define OUT freopen("output.txt","w",stdout)
#define FOR(i,a,b) for(int i=a ; i<=b ; i++)
#define INF 1000000000
#define ll long long int
#define eps (1e-8)
#define sq(x) ( (x)*(x) )

using namespace std;

typedef pair < int, int > pii;
typedef pair < ll, ll > pll;

int main()
{int t1,t2;
float h,m,s;
cin>>h>>m>>s>>t1>>t2;
h=((int)h)%12;
t1-=(int)h ; t1=t1%12; if (t1<0) t1+=12; if (t1==0) t1=12;
t2-=(int)h ; t2=t2%12; if (t2<0) t2+=12;if (t2==0) t2=12;
m=(int)m/5;m=(int)(m-h)%12;
s=(int)s/5;s=(int)(s-h)%12;
h=0;
if (m<0) m+=12; if (s<0) s+=12;

h+=0.5;m+=0.5;s+=0.5;

//cout<<h<<" "<<m<<" "<<s;
int u=max(t1,t2); int v=min(t1,t2);
if (m>s) { float d=m;m=s; s=d;}

if (v<m) {
    if (u<m) cout <<"YES"; else cout<<"NO";
}
else if (v<s){
    if (u<s && u>m) cout<< "YES"; else cout<<"NO";
}
else {
    if (u>s) cout<<"YES"; else cout<<"NO";
}
//cout<<h<<" "<<m<<" "<<s<<" "<<u<<" "<<v;
         return 0;
}
