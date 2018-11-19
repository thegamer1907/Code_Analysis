#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int a[4];

int main(){
	int h,m,s,t1,t2;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	a[0]=h*5;
	a[1]=m;
	a[2]=s;
	t1*=5;
	t2*=5;
	sort(a,a+3);
	int flag,cnt;
	flag=cnt=0;
	for(int i=0;i<3;i++){
		if(t1<=a[i]){
			flag=i;
			break;
		}
		if(i==2)	flag=0;
	}
	for(int i=0;i<3;i++){
		if(t2<=a[i]){
			cnt=i;
			break;
		}
		if(i==2)	cnt=0;
	}
	if(flag==cnt)	printf("YES\n");
	else	printf("NO\n");
	return 0;
}
