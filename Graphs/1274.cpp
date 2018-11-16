/* musubi */
#include<bits/stdc++.h>
using namespace std;

#define eout(X) return !printf(X)
#define MAX 100005
#define MOD 1000000007
#define y1 quaytayqwerty123

typedef long long ll;
int n,t;
int a[100000];
int main(){
	cin>>n>>t;
	for(int i=1;i<n;i++) cin>>a[i];
	a[n]=n;
	for(int i=1;i<=n;i+=a[i]){
		if(i==t) eout("YES");
	}
	eout("NO");
	return 0;
}

