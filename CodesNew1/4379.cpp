/*input
3
#apple
#apple
#fruit
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	vector<string> h;
	string s;
	for(int i=0; i<n; i++)
	{
		cin>>s;
		h.push_back(s);
	}

	int sz;
	int flag=0;
	for(int i=n-1; i>0; i--)
	{
		flag=0;
		sz = min(h[i].size(), h[i-1].size());
		for(int j=1; j<sz; j++)
		{
			if(h[i-1][j] < h[i][j])
			{
				flag = 2;
				break;
			}
			else if(h[i-1][j] > h[i][j])
			{
				h[i-1] = h[i-1].substr(0,j);
				flag=1;
				break;
			}
		}
		if(flag==0)				//flag 0 means all chars same
			h[i-1] = h[i-1].substr(0,h[i].size());
	}
	for(int i=0; i<n; i++)
		cout<<h[i]<<" ";

}