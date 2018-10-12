#include<bits/stdc++.h>
using namespace std;

vector<string> temp;
int main()
{
	ios_base::sync_with_stdio(0);
	int n;cin >> n;
	for(int i = 0; i < n; i++)
	{
		string temp1; cin >> temp1;
		temp.push_back(temp1);
	}
	for(int i = temp.size()-1; i >= 1; i--)
	{
		string s = temp[i], t = temp[i-1];
		if(s > t) continue;
		else
		{
			int start = 1;
			while(start < s.length() && s[start] == t[start]) start++;
		//	cout << start << "\n";
			temp[i-1].erase(start, temp[i-1].length()-start);
		}
	}
	for(int i = 0; i < temp.size(); i++) cout << temp[i] << "\n";
}
