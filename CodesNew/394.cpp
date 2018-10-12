#include<bits/stdc++.h>
using namespace std;
#define ll		long long

const int N= 1e5 +3;
int n, t, a[N], cm[N];

bool can( int num ){
	for(int i=0; i<n; ++i)
		if( i+num <= n && cm[i+num] - cm[i] <= t )
			return true;
			
	return false;
}

int main(){
	scanf("%d%d", &n, &t);
	for(int i=1; i<=n; ++i){
		scanf("%d", a+i);
		cm[i] = cm[i-1] + a[i];
	}
	
	int l=0, h=n;
	
	while( l < h ){
		int mid = (l +h + 1) >> 1;
		
		if ( can(mid) )	l=mid;
		else		h=mid-1;
	}
	
	printf("%d\n", l);
	
	return 0;
}