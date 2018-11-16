#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector < pair < int , int > > v;
	vector <int> b;
	int m,n,x,y;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> x;
		v.push_back(make_pair(x,0));
	}
	sort(v.begin(),v.end());
	cin >> m;
	int count=0;
	for(int i=0;i<m;i++)
	{
		cin >> y;
		b.push_back(y);
	}
	sort(b.begin(),b.end());
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(abs(b[i]-v[j].first)<=1 && v[j].second==0)
			{
				count++;
			//	cout << v[j].first << " " << y << endl;
				v[j].second=1;
				break;
			}
		}
	}
	cout << count << endl;
}
