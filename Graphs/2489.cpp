# include <bits/stdc++.h>
using namespace std;
const int Max = 1e4+5;
int n, c[Max], p[Max], da[Max];
vector <vector<int> > Ke(Max);

int bfs(){
	queue <int> q;
	int rt = 1, temp, si, v;
	q.push(1);
	da[1] = 0;
	while(q.size()){
		int temp = q.front();
		q.pop();
		si = Ke[temp].size();
		for(int i = 0; i < si; i++){
			v = Ke[temp][i];
			if(da[v] == 0){
				da[v] = 1;
				if(c[v] != c[temp]) rt++;
				q.push(v);
			}
		}
	}
	return rt;
}

int main(){
	cin >> n;
	for(int i = 2; i <= n; i++){
		cin >> p[i];
		Ke[p[i]].push_back(i);
	}
	for(int i = 1; i <= n; i++){
		cin >> c[i];
	}
	cout << bfs();
	return 0;
}
