#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ZERO (1e-10)
#define INF int(1e9+1)
#define CL(A,I) (memset(A,I,sizeof(A)))
#define DEB printf("DEB!\n");
#define D(X) cout<<"  "<<#X": "<<X<<endl;
#define EQ(A,B) (A+ZERO>B&&A-ZERO<B)
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
#define IN(n) int n;scanf("%d",&n);
#define FOR(i, m, n) for (int i(m); i < n; i++)
#define F(n) FOR(i,0,n)
#define FF(n) FOR(j,0,n)
#define FT(m, n) FOR(k, m, n)
#define aa first
#define bb second
void ga(int N,int *A){F(N)scanf("%d",A+i);}
#define MX 202
#define MA 15
int N,M,a,b,I,J;
set<int> S[MA][MX];
string F[MX],L[MX],s;
void st(string s,int I,set<int>&S){
    if((int)s.size()<I||!I)return;
    int b=0;
    F(I-1)b<<=1,b+=s[i]-48;
    FT(I-1,(int)s.size())b<<=1,b&=(1<<I)-1,b+=s[k]-48,S.insert(b);
}
string fs(string s){
    string r;
    F(min(MA,(int)s.size()))r+=s[i];
    return r;
}
string ls(string s){
    string r;
    F(min(MA,(int)s.size()))r+=s[s.size()-1-i];
    reverse(r.begin(),r.end());
    return r;
}
void mg(set<int>&a,set<int>&b,set<int>&c){c=b;for(auto&h:a)c.insert(h);}
int main(void){
    cin>>N;
    F(N){
        cin>>s,F[i]=fs(s),L[i]=ls(s);
        FF(MA)st(s,j,S[j][i]);
    }
    cin>>M;
    F(M){
        cin>>a>>b,--a,--b,I=i+N,J=0;
        F[I]=fs(F[a]+F[b]),L[I]=ls(L[a]+L[b]);
        FF(MA)mg(S[j][a],S[j][b],S[j][I]),st(L[a]+F[b],j,S[j][I]);
        while(S[J+1][I].size()==1u<<(J+1))++J;
        printf("%d\n",J);
    }
    return 0;
}
