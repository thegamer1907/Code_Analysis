#include<cstdio>
using namespace std;
int n;
char pass[2];
char a[110][2];
inline bool cmp(const char &c1,const char &c2){
	return pass[0]==c1&&pass[1]==c2;
}
int main(){
	int i,j,k;
	scanf("%s",pass);
	scanf("%d",&n);
	for(i=1;i<=n;++i){
		scanf("%s",a[i]);
		if(cmp(a[i][0],a[i][1])){
			printf("YES\n");
			return 0;
		}
	}
	for(i=1;i<=n;++i){
		for(j=1;j<=n;++j){
			if(cmp(a[i][1],a[j][0])){
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
}
