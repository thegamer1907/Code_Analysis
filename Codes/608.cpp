#include<bits/stdc++.h>
using namespace std;
int N, M, i;
int bs(int x) {
	if (x==0) {
		return 0;
	}
	return x%10+bs(x/10);
}
int main () {
	cin>>N;
	for (i=19;M<N;i++) {
		if (bs(i)==10) {
			M++;
		}
	}
	cout<<i-1<<'\n';
}
