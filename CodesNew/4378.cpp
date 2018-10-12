/*input
4
#car
#cart
#art
#at
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

	// int sz;
	// int flag=0;
	// for(int i=n-1; i>0; i--)
	// {
	// 	flag=0;
	// 	sz = min(h[i].size(), h[i-1].size());
	// 	for(int j=1; j<sz; j++)
	// 	{
	// 		if(h[i-1][j] < h[i][j])
	// 		{
	// 			flag = 2;
	// 			break;
	// 		}
	// 		else if(h[i-1][j] > h[i][j])
	// 		{
	// 			h[i-1] = h[i-1].substr(0,j);
	// 			flag=1;
	// 			break;
	// 		}
	// 	}
	// 	if(flag==0)				//flag 0 means all chars same upto sz
	// 		h[i-1] = h[i-1].substr(0,h[i].size());
	// }

	int sz;
	int lc;
	for(int i=n-1; i>0; i--)
	{
		if(h[i-1] > h[i])
		{
			sz = min(h[i].size(), h[i-1].size());
			lc = 0;
			while(lc<sz && h[i-1][lc]==h[i][lc])
				lc++;
			h[i-1].resize(lc);
		}
	}

	for(int i=0; i<n; i++)
		cout<<h[i]<<" ";

}