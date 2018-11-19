#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
string a, b;
int n, x, y;
int main()
{
	x = 0;
	y = 0;
	cin >> a;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> b;
		if(a == b)  
		{
			cout<<"YES"<<endl;
			return 0;
		}
	 if(a[1] == b[0]) x++;
	 if(a[0] == b[1]) y++;
	}
	if(x >= 1 && y >= 1)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}

	  		   			       		     						