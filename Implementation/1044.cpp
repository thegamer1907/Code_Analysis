#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n , t;
	string que;
	cin >> n >> t >> que;
	for(int i = 1 ; i <= t ; i++)
	{
		for(int j = 0 ; j < n ; j++)
			if(que[j] == 'B' && que[j + 1] == 'G')
			{
				que[j] = 'G';
				que[j + 1] = 'B';
				j++;
			}
//		cout << que << endl;
	}
	cout << que;
}
