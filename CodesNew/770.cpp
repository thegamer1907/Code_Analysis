#include<iostream>
#include<string>
#include<set>

using namespace std;

int main() {
	set<string> me;
	string s;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n + m ; i++)
		cin>>s,me.insert(s);

    if(n>m || n==m&&me.size()%2==1)cout <<"YES";
    else cout <<"NO";
	return 0;
}
