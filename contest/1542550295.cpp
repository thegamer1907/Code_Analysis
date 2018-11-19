#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
char A[2];
char B[101][2];
int main()
{
	int n;
	while( scanf(" %s",A) != EOF )
	{
		scanf(" %d",&n);
		int flag1 = 0;
		int flag2 = 0;
		int check = 0;
		for( int i = 0 ; i < n ; i++ )
			scanf(" %s",B[i]);
		n = n - 1;
		while( n >= 0 )
		{
			if( B[n][1] == A[0] )
				flag1 = 1;
			if( B[n][0] == A[1] )
				flag2 = 1;
			if( A[0] == B[n][0] && A[1] == B[n][1] )
			{
				check = 1;
			}
			if( check == 1 )	break;
			n -= 1;
		}
		if(		( flag1 == 1 && flag2 == 1 )	||		check == 1  )
			printf("YES\n");
		else
			printf("NO\n");
		memset( B ,' ' ,sizeof(B) );
	}
}
					  		     			 	  	 	 	 		 	