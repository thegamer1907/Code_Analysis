#include  <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

bool compare(int i, int j){return (i<j);}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	int m, l, r, count = 0, aux;
	//vector <pair<int,int>> q;
	
	cin >> s >> m;
	int check[s.length()];

	for(int i = 0; i <= s.length(); i++){
		//cin >> l >> r;
		//q.push_back(pair <int, int> (l, r));
		check[i] = 0;
		
	}
	for(int i = 1; i < s.length(); i++){
		if(s[i-1] == s[i]){
			check[i+1] += check[i]+1;
		}
		else{
			check[i+1] = check[i];
		}
	}
	for(int i = 0; i < m; i++){
		cin >> l >> r;
		cout << check[r] - check[l] << endl;
	}	 
	


	return 0;
}
