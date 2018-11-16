#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<list>
#include<map>
#include<bitset>
#include <utility>
using namespace std;
//int n;
//int arr[100] = { 0 };
//struct point{
//	int x,y;
//};
//bool f(int sum){
//	int l = 0; int r = n - 1;
//	while (l<r)
//	{
//		if (arr[l] + arr[r] == sum)return 1;
//		 else if (arr[l] + arr[r]>sum) r--;
//		 else l++;
//	}
	/*return 0;
}
	*/
int main()
{
	char c;
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	for (int j = 1; j <= t; j++)
	{
		for (int i = 0; i < s.size() - 1; i++)
		{
			if (s[i] == 'B'&&s[i + 1] == 'G')
			{
				c = s[i + 1];
				s[i + 1] = s[i];
				s[i] = c;
				i++; 
			}
		}
	}
	cout << s << endl;
	
}