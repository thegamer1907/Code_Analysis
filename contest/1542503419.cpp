#include<bits/stdc++.h>
using namespace std;

int a[5],x,y;
void solve(int &x) {
	if(x > a[1] && x<= a[2])
		x = 1;
	else if(x > a[2] && x<= a[3])
		x = 2;
	else
		x = 3;
}

int main() {

	for(int i=1;i<=3;i++) scanf("%d",&a[i]);
	scanf("%d %d",&x,&y);
	
	a[2]/=5;
	a[3]/=5;
	sort(a+1,a+4);
	
	solve(x);
	solve(y);
	puts(x == y?"YES" : "NO");

}


