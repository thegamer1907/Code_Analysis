#include <cstdio>
using namespace std;
bool a[16];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int all=(1<<k)-1;
	for(int i=1;i<=n;i++){
		int w=0;
		for(int j=1;j<=k;j++){
			int x;
			scanf("%d",&x);
			w=w*2+x;
		}
		if (!w)
			return puts("YES"),0;
		for(int i=0;i<=all;i++){
			if (w&i)
				continue;
			if (a[i])
				return puts("YES"),0;
		}
		a[w]=true;
	}	
	puts("NO");
}