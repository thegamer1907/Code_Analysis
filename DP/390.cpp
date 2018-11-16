#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	int n,m;
	cin >> n;
	vector<int> boys;
	vector<int> girls;
	for(int i = 0;i < n;i ++)
	{
		int x;
		cin >> x;
		boys.push_back(x);
	}
	cin>>m;
	for(int i = 0;i < m;i ++)
	{
		int y;
		cin >> y;
		girls.push_back(y);
	}
	sort(boys.begin(),boys.end());
	sort(girls.begin(),girls.end());
	int nr = 0;
	int i = 0;
	int j = 0;
	while(i < n && j < m)
	{
		if(abs(boys[i] - girls[j]) <= 1)
		{
			nr++;
			i++;
			j++;
		}
		else
		{	if(boys[i] < girls[j])
			{
				i++;
			}
			else
			{
				j++;
			}
		}
	}
	cout<<nr;
}
