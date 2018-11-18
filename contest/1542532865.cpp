#include <bits/stdc++.h>
using namespace std;

#define LL long long	

int n,k;
int f[100005];
LL dp[25][100005];
LL cnt[100005];
int L , R;
LL sum;

LL func( LL x ){
	return x * (x-1)/2;
}

void extendR(){
	sum -= func(cnt[f[R]]);
	cnt[f[R]]++;
	sum += func(cnt[f[R]]);
	R++;
}

void extendL(){
	sum -= func(cnt[f[L]]);
	cnt[f[L]]--;
	sum += func(cnt[f[L]]);
	L++;
}

void shrinkR(){
	R--;
	sum -= func(cnt[f[R]]);
	cnt[f[R]]--;
	sum += func(cnt[f[R]]);
}

void shrinkL(){
	L--;
	sum -= func(cnt[f[L]]);
	cnt[f[L]]++;
	sum += func(cnt[f[L]]);
}

void solve( int k, int l, int r, int optl, int optr){
	if ( l > r ) return;
	
	int mid = ( l + r ) >> 1;
	int opt = -1;
	//if ( k == 2 && mid == 4 ) cout << L << " " << R << " " << sum << endl;
	
	while ( R <= mid ) extendR();
	while ( R > mid+1 ) shrinkR();
	
	for ( int i = optl; i <= min(optr,mid); i++ ){
		while ( L < i ) extendL();
		while ( L > i ) shrinkL();
		LL temp = dp[k-1][i-1] + sum;
		//if ( k == 3 && mid == 5 ) cout << 5 << " = " << i << " " << temp << " " << dp[k-1][i-1] << " " << sum << endl;
		//if ( k == 2 && mid == 4 ) cout << 4 << " = " << i << " " << temp << " " << dp[k-1][i-1] << " " << sum << endl;
		if ( temp < dp[k][mid] ){
			dp[k][mid] = temp;
			opt = i;
		}
	}
	
	solve(k,l,mid-1,optl,opt);
	solve(k,mid+1,r,opt,optr);
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> k;
	for ( int i = 1; i <= n; i++ ){
		cin >> f[i];
	}
	
	L = R = 1;
	sum = 0;
	for ( int i = 1; i <= n; i++ ){
		extendR();
		dp[1][i] = sum;
	}
	
	for ( int i = 2; i <= k; i++ ){
		for ( int j = 1; j <= n; j++ ){
			dp[i][j] = 1e18;
		}
	}
	for ( int i = 2; i <= k; i++ ){
		solve(i,1,n,1,n);
	}
	
	cout << dp[k][n] << endl;
	return 0;
}