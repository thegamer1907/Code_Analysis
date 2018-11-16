#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int> > Ans(20005);
queue<int> q;
vector<int> dist(20005,100000);

int main(){
	int a, b, i = 1;
	cin >> a >> b;
	q.push(a);
	dist[a] = 0;
	while(!q.empty()){
		int t = q.front();
		q.pop();
		if(t == b) break;
		if(2*t < 20000){
			if(dist[t*2] > dist[t] + 1){
				dist[t*2] = dist[t] + 1;
				q.push(t*2);
			}
		}
		if(t - 1 > 0){
			if(dist[t - 1] > dist[t] + 1){
				dist[t - 1] = dist[t] + 1;
				q.push(t - 1);
			}
		}
	}
	cout << dist[b];
	return 0;
}
