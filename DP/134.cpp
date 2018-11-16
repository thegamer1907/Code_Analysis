#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

	int n, m;
	cin >> n;
	
	vector<int> boy;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		boy.push_back(temp);
	}

	cin >> m;

	vector<int> girl;

	for (int i = 0; i < m; i++)
	{
		int temp;
		cin >> temp;
		girl.push_back(temp);
	}

	sort(boy.rbegin(), boy.rend());

	sort(girl.rbegin(), girl.rend());

	int boy_index = 0;
	int girl_index = 0;
	int couple = 0;

	while (boy_index <= boy.size() - 1 && girl_index <= girl.size() - 1 && boy.size() > 0 && girl.size() > 0)
	{

		if (abs(boy[boy_index] - girl[girl_index]) <= 1 )
		{
			boy.erase(boy.begin() + boy_index);
			girl.erase(girl.begin() + girl_index);

			couple++;
		}
		else
		{

			if (girl[girl_index] > boy[boy_index])
			{
				girl_index++;
			}
			else
			{
				boy_index++;
			}

		}

	}

	cout << couple << endl;



}