#include <iostream>
#include <stdio.h>
#include <string.h>


using namespace std;


long long int* initSum(long long int * input, int n) {
	long long int sum = 0;
	long long int *zivotySum = new long long int[n];

	for (long long int i = 0; i < n; i++) {
		sum += input[i];
		zivotySum[i] = sum;
	}
  
	return zivotySum;
}

int main() {
	long long int  n, q;

	cin >> n >> q;

	long long int *zivoty = new long long int[n];
	long long int *strely = new long long int[q];
	long long int *zivotyCopy = new long long int[n];

	for (long long int   i = 0; i < n; ++i) {
		cin >> zivoty[i];
	}
	
	for (long long int   i = 0; i < q; ++i) {
		cin >> strely[i];
	}

	long long int * zivotySum = initSum(zivoty, n);
	memcpy(zivotyCopy, zivotySum, n * sizeof(long long int));

	long long int index = 0, x = 0, y = n - 1;

	for (long long int i = 0; i < q; ++i) {
		while (x != n) {
			index = x + ((y - x) / 2);
			//cout << "index: " << index << endl;
			
			if (index == x) {
				//cout << "tu 1 ( strely: " << zivotyCopy[index] <<", "<< strely[i] << ")";
				if (zivotyCopy[index] < strely[i]) {
					//cout << "tu 2 ";
					index = x = x+1;
				}
				if (zivotyCopy[index] <= strely[i]) {
					//cout << "tu 3 ";
					x = x + 1;
				}
				
				break;
			}

			if (zivotyCopy[index] < strely[i]) {
				x = index;
				//cout << "n";
			}
			else if (zivotyCopy[index] > strely[i]) {
				y = index;
				//cout << "d";
			}  
			else {
				x = index + 1; 
				break;
			}

		}

		//cout <<endl<< x << " - " << y << ",";

		if (x >= n) {
			//memcpy(zivotyCopy, zivotySum, n * sizeof(long long int));
			x = 0;
			y = n - 1;
			index = 0;
		}
		else {
			if (i < q - 1) {
				y = n - 1;
				strely[i + 1] += strely[i];
			}
		}
		cout << n - x << endl;
	}

	delete zivoty;
	delete strely;
	delete zivotyCopy;

	return 0;
}




/*for (long long int i = 0; i < q; ++i) {

	while (strely[i] > 0 && index < n) {
		strely[i] -= zivotyCopy[index];

		if (strely[i] < 0) {
			zivotyCopy[index] = -strely[i];
			break;
		}
		else {
			index++;
		}
	}

	if (index >= n) {
		memcpy(zivotyCopy, zivoty, n * sizeof(long long int));
		index = 0;
	}
	cout << n - index << endl;

}*/