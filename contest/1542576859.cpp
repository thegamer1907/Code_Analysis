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

bool a[100005][5];
int n,k;
int tich(int i,int j){int s=0;FOR (l,1,k){s+=a[i][l]*a[j][l];}
return s;
}

int value(int i){int s=0; FOR(j,1,k) {s=s*2+a[i][j];} return s;}
int b[100];
int c[100];
int main()
{bool res=0;
cin>>n>>k;

FOR (i,1,n){
    FOR (j,1,k) cin>>a[i][j];}

FOR (i,1,16) {b[i]=0;c[i]=0;}

FOR(i,1,n){ if (b[value(i)]==0) {b[value(i)]++;c[value(i)]=i; if (b[value(i)]==2&& value(i)<15) {res=1;} }
if (value(i)==0) {res=1;} }
FOR (i,0,16){
    FOR (j,i+1,16){

        if (tich (c[i],c[j])==0 && b[i]==1&& b[j]==1) {res=1;}
    }
}
if (res==1) cout<<"YES"; else cout<< "NO";

         return 0;
}
