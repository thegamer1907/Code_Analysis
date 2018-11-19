#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i,j=0,k=0,n,f=0,c=0;
	char a[3];
	char b[111][3];
	
	scanf("%s", a);
	scanf("%d", &n);
	
	for(i=0;i<n;i++) {
		scanf("%s", b[i]);
	}
	
	for(i=0;i<n;i++) {
		if(a[0] == b[i][1]) {
			f = 1;
		}
		
		if(a[1] == b[i][0]) {
			k = 1;
		}
		if(a[0] == b[i][0] && a[1] == b[i][1]) {
			c = 1;
		}
	} 
	
	if( f==1 && k==1) {
		printf("YES\n");
	}else if(c==1){	
		printf("YES\n");
	}else {
		printf("NO\n");
	}

	
}
