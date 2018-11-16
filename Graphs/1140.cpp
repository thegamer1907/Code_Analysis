#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int arr[n-1];
	for(int i = 0; i < n-1; i++)
		cin >> arr[i];
	int visited[n] = {0};
	visited[0] = 1;
	for(int i = 0; i < n-1;){
		i += arr[i];
		visited[i] = 1;
	}
	if(visited[k-1])
		cout << "YES";
	else
		cout << "NO";
	return 0;
}