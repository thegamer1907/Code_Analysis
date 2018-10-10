#include "bits/stdc++.h"
using namespace std;

int main(){
	int n, l;

	cin >> n >> l;

	vector<int> lights(n);
	for(int i=0; i< n; i++){
		cin >> lights[i];
	}

	sort(lights.begin(), lights.end());

	double max = (lights[0] > (l - lights[n - 1])) ? lights[0] : (l - lights[n - 1]);

	for(int i=0; i< n - 1; i++){
		double dist = (lights[i+1] - lights[i]) / 2.0;
		if(max < dist)
			max = dist;
	}
	cout << fixed << setprecision(10);
	cout << max << endl;

	return 0;
}
// 1538791938670
