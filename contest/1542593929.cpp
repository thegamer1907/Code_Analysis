#include <iostream>
#include <stack>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	string password;cin>>password;
	int n;cin>>n;
	vector<string> V;
	for (int i = 0; i < n; ++i)
	{
		string str;cin>>str;
		V.push_back(str);
	}
	string stt="";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			stt+=V[i]+V[j];
			stt+=V[j]+V[i];
		}
	}
	if(stt.find(password)==string::npos)cout<<"NO";
	else cout<<"YES";
    return 0;
}
