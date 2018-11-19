#include<iostream>
using namespace std;

int main()
{
	string t;
	int n;
	cin >>t>> n;
	int flag=0;
	while(n--)
	{
		string d;
		cin >> d;
		if(d==t)
		{flag=3;break;}
		if(d[1]==t[0] && flag!=1)
		{flag+=1;
			if(flag==3)
				break;
		}
		if(d[0]==t[1] && flag!=2)
		{
			flag+=2;
			if(flag==3)
				break;
		}
	}
	if(flag==3)
		cout << "YES\n";
	else
		cout <<"NO\n";

}
