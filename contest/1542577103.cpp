#include <bits/stdc++.h>

using namespace std;

int n, m;
bool ha[1<<5];
bitset<4>a[100010];

int main(){
	vector <int> AAAA(100,-1);
	for(int i=0;i<40;i++)
		AAAA[i]++;
		
	cin >> n >> m;
	for(int i=0;i<n;i++){
		int tmp = 0;
		for(int j=0;j<m;j++){
			int y;
			cin >> y;
			a[i][j] = y;
			tmp=tmp<<1|y;
		}
		ha[tmp] = 1;
	}
	bool f = 0;
	for(int i=0;i<=(1<<m);i++){
		for(int j=0;j<=(1<<m);j++){
			if(ha[i] && ha[j] && (i&j)==0){
				f = 1;
				break;
			}
		}
		if(f) break;
	}
	if(f) cout << "YES";
	else
		cout << "NO";
	return 0;
}