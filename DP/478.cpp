#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m, res = 0;
	int a[110], b[110], sel[110] {0};
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	cin >> m;
	for(int i = 0; i < m; i++) cin >> b[i];
	sort(a, a+n);
	sort(b, b+m);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			//cout << "cmp " << a[i] << ", " << b[j] << endl;
			//cout << i << ", " << j << endl;
			if(!sel[j] && abs(a[i]-b[j]) <= 1){
				//cout << i << "->" << j << endl;
				sel[j] = true;
				++res;
				break;
			}
		}
	}
	
	cout << res;
	
	return 0;
}
