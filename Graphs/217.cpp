#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

	int n;
	cin >> n;

	int t;
	cin >> t;


	string input;
	cin >> input;
	
	vector<string> state;

	state.push_back(input);

	for (int i = 0; i < t; i++)
	{
		string data = state[i];
		vector<int> index;

		for (int j = 0; j < data.length() - 1; j++)
		{
			if (data[j] == 'B' && data[j+1] == 'G')
			{
				index.push_back(j);
			}
		}

		for (int j = 0; j < index.size(); j++)
		{
			swap(data[index[j]], data[index[j] + 1]);
		}

		state.push_back(data);
	}

	cout << state[state.size() - 1] << endl;


}