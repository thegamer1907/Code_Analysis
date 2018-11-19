#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char x[10],y[10],n;
int main(){
	scanf("%s",&x);
	scanf("%d",&n);
	bool f1 = false,f2 = false;
	for (int i=1;i<=n;i++){
		scanf("%s",&y);
		if (y[0] == x[0] && y[1] == x[1]){
			puts("YES");
			return 0;
		}
		if (y[1] == x[0]) f1 = true;
		if (y[0] == x[1]) f2 = true;
	}
	if (f1 && f2) puts("YES"); else puts("NO");
	return 0;
}