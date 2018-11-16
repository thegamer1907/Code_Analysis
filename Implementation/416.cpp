#include<iostream>
#include<cmath>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> uch;
	uch.reserve(n);

	for(int i = 0; i < n; i++)
	{
		cin >> uch[i];
	}
	sort(uch.begin(), uch.end());
	int counter = 0;
	for(int i = 0; i < n; i++)
	{
		if( (i<k && uch[i]>0) || (i>=k && uch[i] == uch[k-1]) ) counter++;
		else break;
	}
	cout << counter;

    return 0;
}
