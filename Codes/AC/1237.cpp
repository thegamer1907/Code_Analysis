#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
using namespace std;

int main()
{
	int n,m;
	int by = 0;
	scanf("%d%d",&n,&m);
	string str;
	set<string> S;
		getline(cin,str);
	for(int i = 0;i < n;++i){
		getline(cin,str);
		S.insert(str);
	}
	for(int i = 0;i < m;++i){
		getline(cin,str);
		if(S.count(str)) by++;
	}
	int a = n - by,b = m - by;
	
	if(by & 1){
		if(a + 1 > b) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	else if(a > b) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	
	
}