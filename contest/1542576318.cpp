#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int howm[16];
int n, k;
int sol[16];

bool solve(int idx, int* sol, int messi, int posso, int maxi) {
	//if(messi > maxi) return false;
	if(idx == 1<<k) {
		if(messi == 0) return false;
		//int ok = 1;
		//cout << messi << endl;
		int h[4] = {0};
		for(int i=0;i<(1<<k);i++)
			for(int b=0;b<k;b++)
				if(i & (1<<b)) {
					h[b]+=sol[i];
					if(h[b] > messi/2)
						return false;
				}
		/*for(int i=0;i<(1<<k);i++)
			cout << sol[i] << " " ;*/
		return true;
	}
	if(sol[~idx] > 0 && posso == 0)
		return solve(idx+1, sol, messi, posso, maxi);
		
	bool ret = solve(idx+1, sol, messi, posso, maxi);
	if(ret) return ret;
	for(int i=0;i<=howm[idx] && i <= maxi-messi;i++) {
		sol[idx]  = i;
		if(i == 1 && sol[~idx] > 0)
			posso = 0;
		ret |= solve(idx+1, sol, messi+i, posso, maxi);
		if(ret) return ret;
		if(i == 1 && sol[~idx] > 0)
			break;
	}
	return ret;
}

int main() {
	cin >> n >> k;
	for(int i=0;i<n;i++) {
		int b = 0, bit;
		for(int z=0;z<k;z++) {
			cin >> bit;
			b|= (bit << z);
		}
		howm[b]++;
	}
	/*for(int i=0;i<(1<<k);i++)
		cout << howm[i] << " " ;
	cout << endl;*/
	if(solve(0, sol, 0, 1, 2))
		cout << "YES";
	else cout << "NO";
}
