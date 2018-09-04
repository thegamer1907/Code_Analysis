#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long
#define F first
#define S second
#define PI acos(-1)
#define EPS 1e-8
#define BASE 53ll
#define mod 1000000007ll
#define ld long double
#define MAX 900001
#define NIL 0
#define INF (1<<28)
#define rd(a) scanf("%d",&a);
#define lp(i,n) for(int i=0;i<n;i++)
typedef pair<int,int>ii;
typedef pair<ii,ii>quad;
typedef pair<int,ii>edge;
typedef pair<vector<int>,int>vii;
const int N=1000005;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
ll fact(ll n){ll ret=1;for(int i=1;i<=n;i++)ret*=i;return ret;}
bool is_vowel(char c){if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y')return 1;return 0;}
ld getDistance(ld x1,ld y1,ld x2,ld y2){return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));}

string t,p; /// text and pattern
int b[N],n,m;/// back table , n=length(T) , m=length(P)
void kmpProcess(){/// run kmp on the pattern and itself
  b[0]=0;
  for(int i=1,k=0;i<m;i++){
    while(k>0&&p[i]!=p[k])k=b[k-1];
    if(p[k]==p[i])k++;
    b[i]=k;
  }
}
void kmpSearch(){
   for(int i=0,k=0;i<n;i++){
      while(k>0&&p[k]!=t[i])k=b[k-1];
      if(p[k]==t[i])
        k++;
      if(k==m){
        /// match
        cout<<i<<endl;
        k=b[k-1];
      }
   }
}
bool is[N];
int main()
{
   ///freopen("test.in","r",stdin);
   cin>>p;
   m=p.length();
   kmpProcess();
   vector<int>all;
   int cur=b[m-1];
   while(cur>0){
    all.pb(cur);
    cur=b[cur-1];
   }
   for(int i=0;i<all.size();i++)
      is[all[i]]=1;
   int mx=0;
   for(int i=1;i<m-1;i++){
      if(is[b[i]])
        mx=max(mx,b[i]);
   }
   if(mx){
    for(int i=0;i<mx;i++)printf("%c",p[i]);
   }
   else{
    printf("Just a legend");
   }
   return 0;
}
