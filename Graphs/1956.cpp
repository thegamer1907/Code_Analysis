#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define IF(x, y, a, b) (x % y == 0 ? a : b)
int main(){
	int boys[102];
	int girls[102];
	fill(boys, boys+102, 0);
	fill(girls, girls+102, 0);
	int n;	cin >> n;
	while(n--){
		int x;	cin >> x;
		boys[x]++;
	}
	int m;	cin >> m;
	while(m--){
		int x;	cin >> x;
		girls[x]++;
	}
	int ans = 0;
	for(int i = 1; i < 101; i++){
		ans += min(boys[i], girls[i-1]);
		ans += min(boys[i-1], girls[i]);
		int temp = min(boys[i], girls[i-1]);
		boys[i] -=  temp;
		girls[i-1] -= temp;

		temp = min(boys[i-1], girls[i]);
		boys[i-1] -= temp;
		girls[i] -= temp;
		
		ans += min(boys[i], girls[i]);
		temp = min(boys[i], girls[i]);
		boys[i] -= temp;
		girls[i] -= temp;
	}
	cout << ans;
	return 0;
}