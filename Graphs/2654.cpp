// KALAM
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 77;
const int MOD = 1e9 + 7;
const ll oo = 2e18;
int n,a[N],x,y,p[N],ans;
int Find(int A){
	if(p[A] < 0)return A;
	p[A] = Find(p[A]);
	return p[A];
}
void Unite(int A,int B){
	int Px = Find(A);
	int Py = Find(B);
	if(Px == Py)return;
	if(p[Px] > p[Py])swap(Px,Py);
	p[Px] += p[Py];
	p[Py] = Px;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for(int i = 1;i <= n;i++){
		p[i] = -1;
	}
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		Unite(i,a[i]);
	}
	for(int i = 1;i <= n;i++){
		if(p[i] < 0)ans++;
	}
	cout << ans;
	
	
	return 0;
}
