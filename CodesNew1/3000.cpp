#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int k;
	cin >> k >> s;
	vector < int > pref;
	int tot = 0;
	long long ans = 0;
	pref.push_back(0);
	
	for(int i = 0; i < s.size(); i++)
	{	
		tot += (s[i] == '1');
		
		//ans += (tot == k);

		ans += (upper_bound(pref.begin(),pref.end(),tot-k)) - 
				(lower_bound(pref.begin(),pref.end(),tot-k));
		pref.push_back(tot);		
		//cout << ans << endl;
					
	}
	cout << ans << endl;

}