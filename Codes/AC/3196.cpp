#include <iostream>
#include <cstdio>
using namespace std;
int n, a[100005], m, p;
int main(){
	cin>>n;
	m= 0x3f3f3f3f;
	for(int i=1; i<=n; i++){
		scanf("%d", &a[i]);
		m = min(m, a[i]);
	}
	for(int i=1; i<=n; i++)	a[i] -= m;
	int x=1;
	x = (x + m - 1) % n + 1;
	for(; ; x=x%n+1){
		if(a[x]-p<=0){
			cout<<x<<endl;
			return 0;
		}
		p++;
	}
	return 0;
}