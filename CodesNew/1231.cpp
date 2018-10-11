#include<bits/stdc++.h>
#define rep(i, j, k) for (int i=j; i<k; i++)
#define pii pair<int, int> 
#define fi first
#define se second
#define ll long long 
using namespace std;

const int maxn = 1e5+5;
int a[maxn], n, now, tot, minn = 0x7fffffff;
int main(){
	cin>>n;
	rep(i, 0, n){
		scanf("%d", &a[i]);
		if (a[i]<minn) minn = a[i];
	}
	
	rep(i, 0, n){
		a[i] -= minn;
	}

	now = minn % n, tot = 0;
	while (a[now] > tot){
		tot++;
		now = (now + 1) % n;
	}
	printf("%d", now+1);
}