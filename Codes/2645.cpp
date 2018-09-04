#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int n = s.size();
	vector<int> pi(n);
	set<int> st;

	int res = 0;
	for(int i =1;i<n;++i)
	{
		int j = pi[i-1];
		while(j > 0 && s[i]!= s[j])
			j = pi[j-1];
		if(s[i] == s[j])
			++j;

		pi[i] = j;
		if(i != n-1)st.insert(pi[i]);
	}


	if(st.find(pi[n-1]) != st.end() || pi[n-1] == 0)
		res = pi[n-1];
	else res = pi[pi[n-1] - 1];
//	res = j;
	for(int i=0;i<res;++i)
		cout<<s[i];
	if(res == 0)
		cout<<"Just a legend";
	cout<<endl;
	return 0;
}