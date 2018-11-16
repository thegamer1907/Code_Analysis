#include <bits/stdc++.h>
using namespace std;
int n , x , y , z , cnt , cnt2 , cnt3;
int main() {
	cin >> n;
	for(int i = 1; i <= n; ++i){
		cin >> x >> y >> z;
		cnt += x;
		cnt2 += y;
		cnt3 += z;
	}
	if(cnt == 0 && cnt2 == 0 && cnt3 == 0){
		cout << "YES";
		return 0;
	}
	cout << "NO";
	return 0;
}