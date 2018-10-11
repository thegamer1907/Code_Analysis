#include <bits/stdc++.h>
using namespace std;

vector<int> vi;

int a,b,c,d,l,r,n,m,res,cnt,x,y,z,t;
int main() {
	// your code goes here
	cin >> n >> m;
	for(int i  = 0; i < n ; ++i){
		cin >> t;
		vi.push_back(t);
	}
	l = r = 0;
	while(l < n && r < n){
		if(vi[r] + cnt <= m ){
			cnt+=vi[r];
			a++;
			res = max(res,a);
			r++;
		}else if(r==l) {
			r++;l++;
			cnt=0;
			a = 0;
		}else {
			a = max(0, a-1);
			cnt-=vi[l];
			l++;
		}
		// printf("l:%d r:%d      a:%d   cnt:%d\n", l,r);
	}
	res = max(res,a);
	cout << res << endl;
	
	return 0;
}