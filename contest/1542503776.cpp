#include<bits/stdc++.h>
using namespace std;
int main()
{
	char fro,las,tfro,tlas;
	int n,flgf=0,flgl=0,i;
	scanf ( "%c%c%d",&fro,&las,&n );
	for ( i=1;i<=n;i++ )
	{
		getchar();
		scanf ( "%c%c",&tfro,&tlas );
		if ( tfro == fro && tlas == las ) flgf = flgl = 1;
		if ( tfro == las ) flgf = 1;
		if ( tlas == fro ) flgl = 1;
		if ( flgf == 1 && flgl == 1 ) break;
	}
	if ( flgf == 1 && flgl == 1 ) printf ( "YES\n" );
	else printf ( "NO\n" );
	return 0;
}
 