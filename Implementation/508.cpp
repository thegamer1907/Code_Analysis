#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int n, k, input, num_qualified = 0;

int main()
{
	cin >> n >> k;
	int* participants_scores = new int [n];

	//storing scores
	for (int counter = 0; counter < n; counter++)
	{
		cin >> input;
		participants_scores[counter] = input;
	}

	//checking scores:
	for (int counter = 0; counter < n; counter++)
	{
		if (participants_scores[counter] > 0 && participants_scores[counter] >= participants_scores[k-1])
			num_qualified++;
	}
	cout << num_qualified << endl;
	//system("pause");

	delete [] participants_scores;
	return 0;
}