#include<bits/stdc++.h>
using namespace std;
double a,b,c,s,t;
int main(){
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&s,&t);
	a+=b/(double)60+c/(double)3600;
	b=b/5+c/(double)3600;
	c=c/5;
	if(s>t)swap(s,t);
	if(a==s||a==t||b==s||b==t||c==s||c==t){
	printf("NO\n");
	return 0;	
	}
	if(!(s<a&&a<t)&&!(s<b&&b<t)&&!(s<c&&c<t)){
		printf("YES\n");
		return 0;
	}
	if((s<a&&a<t)&&(s<b&&b<t)&&(s<c&&c<t)){
		printf("YES\n");
		return 0;
	}
	printf("NO\n");
	return 0;
}
