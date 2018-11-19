// KALAM

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int MAXN = 100005;
string s,tmp,p;
string a[105];
string ans = "NO";
int n;
int main(){
	cin >> p;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		if(a[i] == p)ans = "YES";
	}
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(i != j || 1 ){
				if(a[i][1] == p[0] && p[1] == a[j][0])ans = "YES";
			}
		}
	}
	cout << ans;
	return 0;
}
