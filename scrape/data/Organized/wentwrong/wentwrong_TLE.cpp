#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n, m, k, pi, o = 0, p, c = 0;
	cin >> n >> m >> k;
	p = k;
	for(int i = 0; i < m; i++) {
		cin >> pi;
loop:	if(pi <= p) 
			c++;
		else {
			if(c) {
				o++; 
				p += c;
			} else 
				p += k;
				
			if(pi <= p) {
				c = 0;
				goto loop;
			}
			else {
				p += k;
				if(p > n) p = n;
				goto loop;
			}
		}
	}
	if(c) o++;
	cout << o;
}