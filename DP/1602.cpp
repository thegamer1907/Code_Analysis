#include <iostream>
#include <map>
using namespace std;

int main()
{
	string x;
	cin>>x;
	int ab=-1, ba=-1, done=0;
	for(int i=0; i<x.size()-1 && !done; i++)
	{
		if(x[i]=='A' && x[i+1]=='B')
		{
			if(ab==-1)
				ab=i;
			if(ba!=-1 && ba!=i-1)
				done= 1;
		}
		else if(x[i]=='B' && x[i+1]=='A')
		{
			if(ba==-1)
				ba=i;
			if(ab!=-1 && ab!=i-1)
				done= 1;
		}
	}
	if(done)
		cout << "YES";
	else
		cout << "NO";
}
