#include<bits/stdc++.h>

using namespace std;

const int N = 5 * 100 * 1000 + 100;
string s[N] , q;
int j , n;

int main()
{
	cin >> n;
	for(int i = 0 ; i  < n ; i++)
		cin >> s[i];
	for(int  i = n - 1 ; i > 0 ; i--)
		if(s[i] < s[i - 1])
		{
			q = s[i - 1];
			s[i - 1] = "";
			j = 0;
			while(q[j] <= s[i][j])
			{
				s[i - 1] += q[j];
				j++;
			}
		}
	for(int i = 0 ; i < n ; i++)
		cout << s[i] << endl;
}