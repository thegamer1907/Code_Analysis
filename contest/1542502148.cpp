#include<bits/stdc++.h>
#define IL inline
#define ll long long
using namespace std ;

IL ll gi() {
	ll x ;
	scanf("%lld",&x) ; return x ; 
}

ll f[25][100005],n,m,el,er,Sum,K,t[100005],A[100005] ; 

IL void Move(int L , int R) {
	while(er < R) ++ er , Sum += (t[A[er]]++) ;
	while(el > L) -- el , Sum += (t[A[el]]++) ;
	while(el < L) Sum -= (--t[A[el]]) , ++ el ;
	while(er > R) Sum -= (--t[A[er]]) , -- er ; 
}

void dfs(int l , int r , int sl , int sr , int o) {
	if(sl > sr) return ;
	int mid = (l + r) >> 1 , rgt = min(sr , mid) , k = sl ;
	if(l == r) {
		for(int i = sl; i <= rgt; i ++){
			Move(i , l) ;
			f[o][l] = min(f[o][l] , f[o-1][i-1] + Sum) ;
		}
		return ; 
	}
	for(int i = sl; i <= rgt; i ++) {
		Move(i , mid) ;
		if(f[o-1][i-1] + Sum < f[o][mid]) {
			k = i ;
			f[o][mid] = f[o-1][i-1] + Sum ;
		}
	}
	if(l < mid) dfs(l , mid-1 , sl , k , o) ;
	if(mid < r) dfs(mid+1 , r , k , sr , o) ;
	return ;
}

int main() {
	n = gi() ; K = gi() ;
	for(int i = 1; i <= n; i ++) A[i] = gi() ;
	memset(t , 0 , sizeof(t)) ;
	Sum = 0 ;
	memset(f , 36 , sizeof(f)) ;
	for(int i = 1; i <= n; i ++) f[1][i] = (Sum += (t[A[i]] ++)) ;	
	for(int i = 2; i <= K; i ++) {
		el = 1 ; er = 0 ; Sum = 0 ;
		memset(t , 0 , sizeof(t)) ;
		Sum = 0 ;
		dfs(1 , n , 1 , n , i) ;
	}
	//for(int k = 1; k <= K; k ++)
	//	for(int i = 1; i <= n; i ++)
	//		printf("f[%d][%d] = %lld\n" , k , i , f[k][i]) ;
	printf("%lld\n" , f[K][n]) ;
	return 0 ; 
}