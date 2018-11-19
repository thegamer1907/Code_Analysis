#include<bits/stdc++.h>
using namespace std;
int h, m, s, t1, t2;
int main(){
	cin >>h >>m >>s >>t1 >>t2;
	if (t1 > t2) swap(t1, t2);	
	bool ok1 = 1, ok2 = 1;
	if (h >= t2 || h < t1) ok1 = 0;
	if (m >= t2 * 5 || m < t1 * 5) ok1 = 0;
	if (s >= t2 * 5 || s <= t1 * 5) ok1 = 0;
	if (t2 > h && t1 <= h) ok2 = 0;
	if (t2 * 5 > m && t1* 5 <= m) ok2 = 0;
	if (s < t2 * 5 && s > t1 * 5) ok2 = 0;
//	cout <<ok1 <<' ' <<ok2 <<' ' <<t2 * 5 <<' ' <<t1 * 5 <<endl;
	if (!ok1 && !ok2) puts("NO");
	else puts("YES");
	
	return 0;
}