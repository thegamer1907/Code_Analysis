#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
    string s1, s2;
	int n,x=0,y=0,z=0;
	cin>>s1;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>s2;
		if (s2==s1)
			x++;
		else if (s2[0]==s1[1])
			y++;
		if (s2[1]==s1[0])
			z++;
	}
	if ((z>=1 && y>=1) || x>= 1)
		cout << "YES";
	else
		cout << "NO";
  return 0;
}


