#include <bits/stdc++.h>
#define ll long long
#define MAX 200011
#define fr first
#define sc second
#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,x,y,z,sx = 0,sy = 0,sz = 0;
	cin>>n;
	while(n--){
		cin>>x>>y>>z;
		sx += x;
		sy += y;
		sz += z;
	}
	if(sx || sy || sz)cout<<"NO";
	else cout<<"YES";
	return 0;
}