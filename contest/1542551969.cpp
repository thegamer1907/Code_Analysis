#include<cstdio>
#include<cstring>
using namespace std;
char a[5],b[5];
bool flag[5];
int main(){
	int n;
	memset(flag,false,sizeof(flag));
	scanf("%s",a);
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%s",b);
		if ((b[0]==a[0]&&b[1]==a[1])||(b[1]==a[0]&&b[0]==a[1])){
			flag[0]=true;
			flag[1]=true;
		}
		else if (b[1]==a[0])
			flag[0]=true;
		else if (b[0]==a[1])
			flag[1]=true;
	}
	if (flag[0]&&flag[1])
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
