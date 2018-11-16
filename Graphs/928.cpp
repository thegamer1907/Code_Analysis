#include <iostream>
#include <vector>
using namespace std;


int main() {
	int n, t, a, s;
	bool found = false;
	cin >> n >> t;

	vector<int> adj(n);

	for(int i = 1; i < n; ++i) {
		cin >> a;
		adj[i] = i+a;
	}

	s = 1;
	
	while(!found  &&  s != n) {
		s = adj[s];

		if(s == t)
			found = true;
	}


	if(found)
		cout << "YES";
	else
		cout << "NO";
}