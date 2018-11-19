#include<cstdio>
int main(){
	int h,m,s,t1,t2;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if(h==12) h=0;
	h*=10;
	m*=2;
	s*=2;
	if(m!=0||s!=0) h=(h+1)%120;
	if(s!=0) m=(m+1)%120;
	if(t1==12) t1=0;
	t1*=10;
	if(t2==12) t2=0;
	t2*=10;
	bool f1=true,f2=true;
	for(int i=t1;i!=t2;i=(i+1)%120){
		if(i==h||i==m||i==s) f1=false;
	}
	for(int i=t1;i!=t2;i=(i+119)%120){
		if(i==h||i==m||i==s) f2=false;
	}
	if(f1||f2) printf("YES\n"); else printf("NO\n");
	return 0;
}
