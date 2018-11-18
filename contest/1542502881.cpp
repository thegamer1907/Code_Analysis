#include<bits/stdc++.h>
using namespace std;

#define Death Komachi 
#define Uni :All right
#define REP(i,a,b) for(int i=(a),i##_end_=(b);i<i##_end_;++i)
#define DREP(i,a,b) for(int i=(a),i##_end_=(b);i>i##_end_;--i)
#define LREP(i,a) for(int i=Head[a];i;i=Next[i])
#define M 100004
#define LL long long

void Rd(int &x){
	static char c; x=0;
	while((c=getchar())<48);
	do x=(x<<3)+(x<<1)+(c^48);
	while((c=getchar())>47);
}

int A[M],n,m;
LL F[2][M];
int Cnt[M];
bool f;
inline bool chkmin(LL &a,const LL &b){return b<a?a=b,1:0;}
void Solve(int l,int r,int L,int R,LL Cost){
	if(L>R)return;
	int mid=L+R>>1,t=min(r,mid);
	
	int c=-1;
	REP(i,L,mid+1)Cost+=Cnt[A[i]]++;
	REP(i,l,t+1){
		Cost-=--Cnt[A[i]];
		if(chkmin(F[!f][mid],F[f][i]+Cost))c=i;
	}
	
	REP(i,l,t+1)Cost+=Cnt[A[i]]++;
	REP(i,L,mid+1)Cost-=--Cnt[A[i]];
	
	Solve(l,c,L,mid-1,Cost);
	
	REP(i,L,mid+1)Cost+=Cnt[A[i]]++;
	REP(i,l,c)Cost-=--Cnt[A[i]];
	
	Solve(c,r,mid+1,R,Cost);
	
	REP(i,l,c)Cnt[A[i]]++;
	REP(i,L,mid+1)Cnt[A[i]]--;
}
int main(){
	Rd(n),Rd(m);
	REP(i,1,n+1){
		Rd(A[i]);
		F[0][i]=F[0][i-1]+Cnt[A[i]];
		Cnt[A[i]]++;
	}
	memset(Cnt,0,sizeof(Cnt));
	while(--m){
		memset(F[!f],63,sizeof(F[!f]));
		Solve(1,n,1,n,0);
		f^=1;
	}
	printf("%I64d\n",F[f][n]);
	return 0;
}