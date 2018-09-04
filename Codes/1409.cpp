#include <bits/stdc++.h>
using namespace std;

int arr[100005];
priority_queue<long long> pq;

int main() {
	int n,S;
	cin >> n >> S;

	for(int i=0; i<n; i++)
		cin >> arr[i];

	int low = 0;
	int high = n;
	long long ans = 0;
	while(low!=high) {
		int k = (low+high+1)/2;

		for(int i=0; i<k; i++)
			pq.push(arr[i]+(long long)(i+1)*k);
		for(int i=k; i<n; i++) {
			pq.push(arr[i]+(long long)(i+1)*k);
			pq.pop();
		}

		long long num = 0;
		while(pq.size()) {
			num += pq.top();
			pq.pop();
		}

		if(num<=S) {
			low = k;
			ans = num;
		}
		else
			high = k-1;
	}

	cout << low << " " << ans << endl;
}