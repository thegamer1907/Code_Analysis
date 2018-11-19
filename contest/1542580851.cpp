#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
double a,b,c,d,e,ans[10];
int main(){
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	a=a+b/60+c/3600;
	if(a>12) a-=12;
	a*=5;
	b=b+c/3600;
	d*=5;e*=5;
	if(a==d||a==e||b==d||b==e||c==d||d==e) {puts("NO");return 0;} 
	ans[1]=a;ans[2]=b;ans[3]=c;ans[4]=d;ans[5]=e;
	sort(ans+1,ans+6);
	if((ans[1]==d&&ans[5]==e)||(ans[1]==e&&ans[5]==d)){ puts("YES");return 0;}
	for(int i=1;i<=5;i++){
		if(ans[i]==d){
			if(ans[i+1]==e) puts("YES");
			else puts("NO");
			return 0; 
		}
		if(ans[i]==e){
			if(ans[i+1]==d) puts("YES");
			else puts("NO");
			return 0; 
		}
	}
	return 0;
}
