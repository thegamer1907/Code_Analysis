# include <bits/stdc++.h>
# define fi(i, bd, kt) for(int i = bd; i <= kt; i++)
# define fd(i, bd, kt) for(int i = bd; i >= kt; i--)
using namespace std;
int n, a[100001], aMin = 1000000001;
int main(){
	cin >> n;
	fi(i, 1, n){
		cin >> a[i];
		aMin = min(aMin, a[i]);
	}
	int x = aMin/n;
	x *= n;
	fi(i, 1, n){
		a[i] -= x;
	}
	int cs = 1;
	while(1){
		if(a[cs] <= cs-1){
			cout << cs;
			break;
		}else{
			a[cs] -= n;
			cs++;
			if(cs > n) cs = 1;
		}
	}
	return 0;
}

