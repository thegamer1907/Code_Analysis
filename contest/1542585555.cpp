#include <bits/stdc++.h>
using namespace std;

int n,k,a[4],x;
bool ada[16];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k;
	while (n--){
		int now=0;
		for (int i=0;i<k;i++){
			cin >> x;
			now=(now<<1)|x;
		}
		ada[now]++;
	}
	for (int i=1;i<(1<<(1<<k));i++){
		for (int j=0;j<k;j++){
			a[j]=0;
		}
		int ct=0,mx=0,ok=1;
		for (int j=0;j<(1<<k);j++){
			if (i&(1<<j)){
				if (!ada[j]){
					ok=0;
					break;
				}
				ct++;
				for (int l=0;l<k;l++){
					if (j&(1<<l)){
						a[l]++;
						mx=max(mx,a[l]);
					}
				}
			}
		}
		if (mx*2<=ct&&ok){
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
}
