#include <bits/stdc++.h>
#define px first
#define py second

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define N 101
int n;
string a[N];
string x;

int main(){
	cin >> x >> n;
	bool flag1 = false;
	bool flag2 = false;
	bool flag = false;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] == x)
			flag = true;
		if(a[i][0] == x[1])
			flag1 = true;
		if(a[i][1] == x[0])
			flag2 = true;
	}
	if(flag || (flag1 && flag2)){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}