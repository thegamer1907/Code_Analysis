#include <iostream>
#include <vector>

using namespace std;

int kadane(vector <int> & num);

int main(void)
{
	int n = 0;
	cin >> n;

	vector <int> num(n);
	for (int i = 0; i < n; ++i)
		cin >> num[i];

	cout << kadane(num) << endl;

	return 0;
}

int kadane(vector <int> & num)
{
	int sum = 0;
	int left = 0;
	int right = 0;
	int start = 0;
	int max_sum = 0;

	for (int i = 0; i < num.size(); ++i){
		if (num[i])
			sum -= 1;
		else
			sum += 1;

		if (sum > max_sum){
			max_sum = sum;
			right = i;
			left = start;
		}

		if (sum < 0){
			sum = 0;
			start = i + 1;
		}
	}

	int result = 0;

	for (int i = 0; i < left; ++i)
		if (num[i])
			++result;

	for (int i = left; i < right + 1; ++i)
		if (!num[i])
			++result;

	for (int j = right + 1; j < num.size(); ++j)
		if (num[j])
			++result;

	return result;
}