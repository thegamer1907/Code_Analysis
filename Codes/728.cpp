#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[21][10][11];
	memset(arr, 0, sizeof(arr));
	// arr[0][0][0] = 1;
	for(int i = 0; i < 21; i++) {
		// x = i
		for(int j = 0; j < 10; j++) {
			// y = j
			for(int k = 0; k < 11; k++) {
				// z = k
				if( j > 0)
					arr[i][j][k] = arr[i][j-1][k];

				if(i > 0 && k >= j ) {
						arr[i][j][k] += arr[i-1][9][k-j];
				}

			}
			arr[0][j][j] = 1;
		}
	}
	
	int to_find;
	cin>>to_find;
	int sum_now=10;
	bool has_started = false;
	for(int i = 20; i >= 0; i--) {
		for(int j = 9; j >= 0; j--) {
			if(j > 0 && arr[i][j][sum_now] >= to_find &&  arr[i][j-1][sum_now] < to_find) {
				has_started = true;
				cout<<j;
				to_find -= arr[i][j-1][sum_now]; 
				sum_now -= j;
				break;
			}

			if(has_started&&j==0) cout<<j;
		}
	}

	return 0;
}