#include <bits/stdc++.h>
#define MAXN 100009

using namespace std;

int n,m,a[MAXN],v[MAXN],l,r,s,p;

int main()
{
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		v[i] = v[i-1] + a[i];
	}
	
	for(int i = 0;i < n;i++){
		if(a[i] == m){
			s = 1;
		}
		else if(a[i] < m) {
			l = i;
			r = n-1;
			while(l <= r){
				int md = (l+r)/2;
				if(v[md] - v[i-1] <= m){
					s = (md-i)+1;
					l = md+1;
				}
				else r = md-1;
			}
		}
		if(p < s)
			p = s;
	}
	cout << p;
	
}
