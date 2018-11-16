#include <cstdio>
#include <iostream>
#include <set>

using namespace std;

const int MAXN = 1e5+15;

set<int> S;

int N, M;
int ar[MAXN];
int res[MAXN];

int main(){

	scanf("%d%d", &N, &M);

	for( int i=1 ; i<=N ; i++ )
		scanf("%d", ar+i);
	
	for( int i=N ; i ; i-- ){
		S.insert(ar[i]);
		res[i] = (int)S.size();
	}
	
	for( int ind, i=1 ; i<=M ; i++ ){
		scanf("%d", &ind);
		printf("%d\n", res[ind]);
	}

	return 0;
}