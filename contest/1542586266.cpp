#include <cstdio>
#include <algorithm>
#include <iostream>
#define fi first
#define se second
#define pdd pair<double,double>
using namespace std;
pdd a[10];
int main(){
	for (int i=1;i<=5;i++) cin >> a[i].fi;
	a[1].fi*=5;
	a[4].fi*=5;
	a[5].fi*=5;
	if (a[1].fi==60) a[1].fi=0;
	for (int i=1;i<=3;i++) a[i].fi+=0.5;
	if (a[4].fi>a[5].fi) swap(a[4],a[5]);
	for (int i=1;i<=5;i++) a[i].se=i;
	//for (int i=1;i<=5;i++) printf("%.3lf\n",a[i].fi);
	sort(a+1,a+6);
	for (int i=1;i<=4;i++) if (a[i].se==4 && a[i+1].se==5){
		printf("YES\n");
		return 0;
	}
	if (a[1].se==4 && a[5].se==5) printf("YES\n");
	else printf("NO\n");
	return 0;
}