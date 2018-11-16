#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int num[n];
	for(int i = 0; i < n; i++)
		cin >> num[i];
	int max = 0;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			int count = 0;
			for(int x = 0; x < n; x++){
				if(num[x] == 0 && ( x >= i  && x <= j))
					count++;
				else if(x < i  || x > j)
					count+= num[x];
			}
			if(count > max)
				max = count;
		}
	}
	cout << max;
	return 0;
}