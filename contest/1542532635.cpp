#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pi acos(-1)
#define ll long long
#define F(n) FI(i,n)
#define FI(i,n) FL(i,0,n)
#define FL(i,l,n) for(int i=l;i<n;++i)
#define mod 1000000009

int main(){
	int n,k; cin>>n>>k;
	int a[17] = {};
	F(n){
		int res = 0;
		for(int i = 0,j = 1 ; i < k ; i++,j *= 2){
			int x; scanf("%d",&x);
			res += x*j;
		}
		a[res] = 1;
	}
	for(int i = 0 ; i < 16 ; i++){
		for(int j = 0 ; j < 16 ; j++){
			if(!(i&j)&&a[i]&&a[j]){
				printf("YES");
				return 0;
			}
		}
	}
	printf("NO");
}
