#include <bits/stdc++.h>
#define loop(a,b,c) for(int a=b;a<=c;a++)
#define ll long long
#define vi vector < int >
#define vv vector < vi >

using namespace std;
ll n,t,a;
vi v[1000009];
ll f[1000009];

int main(){
	cin >> n >> t;
	loop(i,1,n-1){
		cin >> a;
		f[i] = i+a;
	}
	int point=1;
	while(point < t){
		point = f[point];
	}
	if(point==t) cout << "YES\n"; else cout << "NO\n";
}
