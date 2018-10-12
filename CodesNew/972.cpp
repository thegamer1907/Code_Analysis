#include<iostream>
#include<set>
using namespace std;


int main()
{
	set<string> s, s1;
	string word;

	int n, m;
	cin >> n >> m;

	for(int i=0;i<m+n;i++)
	{
		cin >> word;
		s.insert(word);
	}

	int p = n+m-s.size();

	n += p%2;

	if(n>m)
		cout << "YES\n";
	else
		cout << "NO\n";




		

}
