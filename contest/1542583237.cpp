#include<bits/stdc++.h>
using namespace std;
int Next[105],Pre[105];
int h,m,s,t1,t2,i,s1,s2,s3;
const int P=60*60*12;
int IN(int p,int o,int q){
	return (o-p+P)%P<(q-p+P)%P;
}
int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	h%=12;t1%=12;t2%=12;
	s1=h*60*60+m*60+s;
	s2=(m*60+s)*12;
	s3=s*60*12;
	t1=t1*3600;t2=t2*3600;
	if (IN(t2,s1,t1)||IN(t2,s2,t1)||IN(t2,s3,t1))
	  if (IN(t1,s1,t2)||IN(t1,s2,t2)||IN(t1,s3,t2))
	    return puts("NO"),0;
	puts("YES");
}