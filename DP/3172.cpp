#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int mx = 0, t = 0;
	int a, b = 0;
	
	while(n--){
		cin>>a;
		if(a <= b * 2) t++;
		else {
			mx = max(t, mx);
			t = 1;
		}
		b = a;
	}
	mx = max(t, mx);
	cout<<mx;
}