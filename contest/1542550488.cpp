#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int probset[20];

int N, k;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin>>N>>k;
	for(int i=0;i<N;i++) {
		int p = 0;
		for(int j=0;j<k;j++) {
			int t;
			cin>>t;
			p += t * (1 << j);
		}
		probset[p] += 1;
	}
	int max = (int)pow(2.0, (double)k);
	bool ans = false;
	if(probset[0]) ans = true;
	else {
		for(int i=1;i<max;i++) {
			for(int j=1;j<max;j++) {
				if(((i & j) == 0) && probset[i] && probset[j]) {
					ans = true;
				}
			}
		}
	}

	if(ans) {
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
	return 0;
}
