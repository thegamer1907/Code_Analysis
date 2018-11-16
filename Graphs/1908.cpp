#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, cnt = 0;
	vector<int> b, g;
	
	cin >> n;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		b.push_back(temp);
	}
	cin >> m;
	for(int j = 0; j < m; j++){
		int temp;
		cin >> temp;
		g.push_back(temp);
	}
	
	sort(b.begin(), b.end());
	sort(g.begin(), g.end());
	for(int i = 0; i < n; i++){
		for(int j = 0; j < g.size(); j++){
			if(abs(b[i]-g[j]) <= 1 && !g.empty()){
				cnt++;
				g.erase(g.begin()+j);
				break;
			}
		}
	}
	
	cout << cnt << endl;
	
	return 0;
}