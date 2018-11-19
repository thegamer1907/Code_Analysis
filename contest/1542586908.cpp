#include<cstdio>
#include<algorithm>
using namespace std;
int h,m,s,t1,t2;
bool avai,flag;
int main(){
	int i,j,k;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	h%=12;
	h*=10;
	m*=2;
	s*=2;
	if(s!=0)++m;
	if(m!=0)++h;
	t1%=12;
	t2%=12;
	t1*=10;
	t2*=10;
	if(t1>t2){
		swap(t1,t2);
	}
	flag=true;
	for(i=t1;i<=t2;++i){
		if(i==h||i==m||i==s){
			flag=false;
			break;
		}
	}
	avai=flag;
	flag=true;
	for(i=t2;i<=120;++i){
		if(i==h||i==m||i==s){
			flag=false;
			break;
		}
	}
	for(i=0;i<=t1;++i){
		if(i==h||i==m||i==s){
			flag=false;
			break;
		}
	}
	avai|=flag;
	if(avai){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
}
