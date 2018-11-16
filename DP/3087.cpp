#include <bits/stdc++.h>
using namespace std;

int s[3010];
int c[3010];
int pre[3010];

int main(){
	ios::sync_with_stdio(false);
	int n,minc,ans;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> s[i];
	for (int i = 1; i <= n; i++)
		cin >> c[i];
	for (int i = 2; i <= n - 1; i++){
		minc = -1;
		for (int j = i + 1; j <= n; j++){
			if (s[j] > s[i]){
				if (minc < 0 || c[j] < minc)
					minc = c[j];
			}
		}
		pre[i] = minc;
	}
	ans = -1;
	for (int i = 1; i <= n - 2; i++){
		for (int j = i + 1; j <= n - 1; j++){
			if (s[j] > s[i]){
				if (pre[j] > 0){
					if (ans < 0 || c[i] + c[j] + pre[j] < ans)
						ans = c[i] + c[j] + pre[j];
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}