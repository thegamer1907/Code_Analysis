
#include <bits/stdc++.h>
#define N 10000005

using namespace::std;

int S[N], R[N];
bool F[N];

int main( void )
{
	int n, q, a, b;
	scanf("%d",&n);

	memset( S, 0, sizeof S );
	memset( F, false, sizeof F );
	memset( R, 0, sizeof R );

	for( int i = 0; i < n; i++ )
	{
		scanf("%d",&a);
		S[a]++;
	}

	for( int i = 2; i <= N; i++ )
	{
		if( !F[i] ) 
		{
			for( int j = i; j <= N; j += i )
			{
				R[i] += S[j]; 
				F[j] = true;
			}
		}
	}

	for( int i = 1; i < N; i++ )
		R[i] += R[i-1];

	scanf("%d",&q);

	for( int i = 0; i < q; i++ )
	{
		scanf("%d%d",&a,&b);
		if( a >= N ) a = N;
		if( b >= N ) b = N-1;
		printf("%d\n",R[b]-R[a-1]);
	}

	return 0;
}
















