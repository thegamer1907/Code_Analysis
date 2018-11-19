#include<cstdio>
using namespace std;
int n,k;
int a[100010][4];
bool f1[4],f2[4][4];
int main(){
	int i,j,t,j2;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;++i){
		for(j=0;j<k;++j){
			scanf("%d",&a[i][j]);
		}
		for(j=0;j<4;++j){
			if(!a[i][j]){
				f1[j]=true;
			}
		}
		for(j=0;j<4;++j){
			for(j2=0;j2<4;++j2){
				if((!a[i][j])&&(!a[i][j2])){
					f2[j][j2]=true;
				}
			}
		}
	}
	for(i=1;i<=n;++i){
		t=0;
		for(j=0;j<4;++j){
			t+=a[i][j];
		}
		if(t==0){
			printf("YES\n");
			return 0;
		}
		if(t==1){
			for(j=0;j<4;++j){
				if(a[i][j]){
					if(f1[j]){
						printf("YES\n");
						return 0;
					}
				}
			}
		}
		if(t==2){
			for(j=0;j<4;++j){
				if(a[i][j]){
					break;
				}
			}
			for(j2=j+1;j2<4;++j2){
				if(a[i][j2]){
					if(f2[j][j2]){
						printf("YES\n");
						return 0;
					}
				}
			}
		}
	}
	printf("NO\n");
	return 0;
}
