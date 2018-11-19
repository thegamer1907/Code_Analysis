#include<iostream>
#include<string>
using namespace std;
int main()
{
	int d,c=0,c1=0;
	string m;
	cin >> m >> d;
string *b=new string[d];
for (int i = 0; i < d; i++){
	cin >> b[i]; if (b[i][1] == m[0] ){ c++; } if ( b[i][0] == m[1]){ c1++; }
	if (b[i] == m){ c += 2; c1 = +2; }
}
if (c + c1 >= 2 && c!=0 && c1!=0){ cout << "YES"; }
else
{
	cout << "NO";
}
}