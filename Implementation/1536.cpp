#include <iostream>
#include<string>
#include<cmath>

using namespace std;
int main()
{
	string N, s;
	int j=0;
	

	cin>>N;
	for(int i=0; i<N.length();i++)
		{if(N.substr(i,7)=="0000000"&&(i+7)<=N.length())
		{
			s="YES";
			j++;
			
	}
		else if(N.substr(i,7)=="1111111"&&(i+7)<=N.length())
			{s="YES";
	j++;
	}
	}
		
	if(j>0)
		cout << s;
	else
		cout << "NO";
	return 0;
}