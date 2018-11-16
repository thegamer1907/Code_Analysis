#define INF 200001

#include <iostream>
#include <vector>
#include <string>

using namespace std;
int max(int a, int b)
{
	if (a > b)
		return a;
	else return b;
}

struct  str
{
	int first, second, third;
};
int main()
{
	int n;
	cin >> n;
	
	
	vector <str> a(n + 1);
	int maxi = 0;
	for (int i = 1; i < n + 1; i++)
	{
		cin >> a.at(i).first;
		if (a.at(i).first == 1)
			maxi++;
	}
	a.at(0).second = 0;
	a.at(0).third = 0;
	for (int i = 1; i < n + 1; i++)
	{
		if (a.at(i).first == 1)
		{
			a.at(i).second = a.at(i - 1).second;
			a.at(i).third = a.at(i - 1).third + 1;
		}
		else
		{
			a.at(i).second = a.at(i - 1).second + 1;
			a.at(i).third = a.at(i - 1).third;
		}
		
	}
	int otv = 0;
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = i; j < n + 1; j++)
		{
		
			if (otv < maxi + (a.at(j).second - a.at(i - 1).second) - (a.at(j).third - a.at(i - 1).third))
			{
				otv = (maxi + (a.at(j).second - a.at(i - 1).second) - (a.at(j).third - a.at(i - 1).third));
			}
			
		}
	}

	cout << otv;
	//cout << maxi;

	//system("pause");
}
