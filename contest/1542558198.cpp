#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int h,m,s,t1,t2;
int main() {
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	h%=12;
	m=m/5;
	s=s/5;
	t1%=12;
	t2%=12;
	bool judge=1;
	for (int t=t1;t!=t2;t=(t+1)%12)
		if (t==h||t==m||t==s) {
			judge=0;
			break;
		}
	if (judge) {
		printf("YeS\n");
		return 0;
	}
	judge=1;
	for (int t=t2;t!=t1;t=(t+1)%12)
		if (t==h||t==m||t==s) {
			judge=0;
			break;
		}
	if (judge) printf("YeS\n");
	else printf("No\n");
	return 0;
}