#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, x, n) for(int i = x; i < (int)(n); ++i)
#define speed ios::sync_with_stdio(0); cin.tie(0);
int const N = 1e5+1;
int a[N] , b[N] , found[N] , Frq[N];
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif
	speed 
	int x , y;
	cin >> x >> y;
	f(i,0,x){
		cin >> a[i];
	}
	f(i,0,y) cin >> b[i];
	for(int i =x-1;i>=0;i--){
		if (found[a[i]] == 0){
			Frq[i+1] = Frq[i+2] + 1;
			found[a[i]] = 1;
		}else{
			Frq[i+1] = Frq[i+2];
		}
	}
	f(i,0,y) cout << Frq[b[i]] << endl;




	return 0;
}
