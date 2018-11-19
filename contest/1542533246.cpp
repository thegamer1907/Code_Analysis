#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cstdlib>
using namespace std;
const int mod=1e9+7;
const int INF=2147483647;

int main(){
	int a,b,c,d,e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	double x=6.0*c,y=6.0*b+0.1*c,z=30.0*a+0.5*b+0.5*c/60;
	d*=30,e*=30;
	if(e>d){
		bool ok1=1;
		if(x>d && x<e) ok1=0;
		if(y>d && y<e) ok1=0;
		if(z>d && z<e) ok1=0;
		bool ok2=1;
		if(x<d || x>e) ok2=0;
		if(y<d || y>e) ok2=0;
		if(z<d || z>e) ok2=0;
		if(ok1||ok2) puts("YES");
		else puts("NO");
	}
	else{
		bool ok1=1;
		if(x<d && x>e) ok1=0;
		if(y<d && y>e) ok1=0;
		if(z<d && z>e) ok1=0;
		bool ok2=1;
		if(x>d || x<e) ok2=0;
		if(y>d || y<e) ok2=0;
		if(z>d || z<e) ok2=0;
		if(ok1||ok2) puts("YES");
		else puts("NO");
	}
	return 0;
}