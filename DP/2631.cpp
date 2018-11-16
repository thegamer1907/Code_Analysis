#include<cstdio>
#include<algorithm>
#include<cctype>
#include<cstring>
#include<iostream>
#include<cmath>
#define LL long long
#define INF (2139062143)
#define N (100001)
using namespace std;
int a1,a2,ans;
template <typename T> void read(T&t) {
	t=0;
	bool fl=true;
	char p=getchar();
	while (!isdigit(p)) {
		if (p=='-') fl=false;
		p=getchar();
	}
	do {
		(t*=10)+=p-48;p=getchar();
	}while (isdigit(p));
	if (!fl) t=-t;
}
int main(){
	read(a1),read(a2);
	if (a1>a2) swap(a1,a2);
	while (1){
		if (a1==2&&a2==1){
			ans++;
			break;
		}
		if (a1==a2&&a1==1){
			break;
		}
		if (a1==a2&&a1==2){
			ans++;
			break;
		}
		if (a2%2==0){
			a1+=a2/2-1;
			ans+=a2/2-1;
			a2=2;
			swap(a1,a2); 
		}
		else{
			a1+=a2/2;
			ans+=a2/2;
			a2=1;
			swap(a1,a2);	
		} 
		//printf("%d %d %d\n",a1,a2,ans);
	}
	printf("%d",ans);
	return 0;
}
