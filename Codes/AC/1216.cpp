// KALAM
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int MAXN = 1e7 + 5;
const ll MOD = 1e9 + 7;
int n,m,same;
string s;
map < string , bool > mark;
int main(){
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> s;
		mark[s] = true;
	}
	for(int i = 0;i < m;i++){
		cin >> s;
		if(mark[s])same++;
	}
	for(int i = 0;n >= 0 && m >= 0;i++){
		if(i % 2){
			if(same > 0){
				same--;n--;
			}
			m--;
		}
		else{
			if(same > 0){
				same--;m--;
			}
			n--;
		}
	}
	if(m < 0){
		return cout << "YES",0;
	}
	cout << "NO";
	
	
	
	return 0;
}
