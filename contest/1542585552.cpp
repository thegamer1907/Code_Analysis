#include <bits/stdc++.h>
#define Tom return 0
using namespace std;
int main(){
	string p;
	cin >> p;
	int a;
//	cout << p[0] << endl;
	int q = 0, w = 0;
	string p1;
	cin >> a;
	for(int i = 0; i < a;i++)
	{
		cin >> p1;
		if(p == p1)
		{
			cout << "YES";
			return 0;
		}
			if(p[0] == p1[1]) q++;
		//	if(p[0] == p1[0]) q++, p[0] = '0';
		//	if(p[1] == p1[1]) q++, p[0] = '0';
			if(p[1] == p1[0]) w++;
	}
//	cout << q;
	if(q >= 1 && w >= 1)
	cout << "YES";
	else
	cout << "NO";
	Tom;
}