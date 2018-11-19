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

char a[106][2];
bool l=0;
int main()
{char p[2];
int n;
bool t1=0,t2=0;
cin>>p[0]>>p[1];
cin>>n;
FOR (i,1,n){ cin >>a[i][0]>>a[i][1]; if (a[i][0]==p[0] && a[i][1]==p[1] ) l=1;}
if (l==1) cout<<"YES";
else {
    FOR (i,1,n){if (a[i][0]==p[1]) t1=1; if (a[i][1]==p[0]) t2=1;  }
    if (t1==1 &&t2==1) cout<<"YES"; else cout<<"NO";
}


         return 0;
}
