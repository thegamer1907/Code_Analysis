#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <list>
using namespace std;
int n, t;
int arr[100001];
int main() {
	ios_base::sync_with_stdio(false);
	cin >> n >> t;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int sum = 0;
	int i = 0, j = 0, result = 0;
	while (j <n ) {
		if(sum+arr[j]<=t)
			sum += arr[j++];
		else {
			result = max(result, j - i);
			sum -= arr[i++];
		}
	}
	result = max(result, j - i);
	cout << result;
	return 0;
}