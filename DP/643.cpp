#include <bits/stdc++.h>
using namespace std;

string str;
vector<int> p;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> str;
	p.resize(str.size()+1);
	p[0]=0;

	for(int i=1;i<=str.size();i++){
		if(str[i]==str[i-1]) p[i]=p[i-1]+1;
		else p[i]=p[i-1];
	}

	int q, a, b;
	cin >> q;
	while(q--){
		cin >> a >> b;
		cout << p[b-1]-p[a-1] << endl;
	}

	return 0;
}