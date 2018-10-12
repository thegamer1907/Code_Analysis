#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<int> vec;
	int k; cin >> k;

	char ch; cin.get();
	int index = 0;

	vec.push_back(-1);
	while((ch = cin.get()) && ch != '\n') {
		if(ch == '1') vec.push_back(index);
		++index;
	}
	vec.push_back(index);
	long long count = 0;
	int size = vec.size();

	if(k == 0) {
		count = ((long long)vec[1] * (vec[1] + 1)) >> 1;
		for(int i = 2; i < size; i++) {
			int l = vec[i] - vec[i - 1] - 1;
			count += ((long long)l * (l + 1)) >> 1;
		}
		cout << count << '\n';
		return 0;
	}

	for(int i = 1; i < size - k; i++)
		count += (long long)(vec[i] - vec[i - 1]) * (vec[i + k] - vec[i + k - 1]);
	
	cout << count << '\n';

	return 0;
}