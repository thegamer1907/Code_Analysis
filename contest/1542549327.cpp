#include<iostream>
#include<string>
using namespace std;
int main()
{
	string password, test;
	cin >> password;
	string text;
	int n;
	cin >> n;
	bool flag2=false;
	bool flag1=false;
	for(int i=0 ; i<n ; i++)
	{
		cin >> test;
		if(n == 1)
		{
			if((test[0]==password[1] && test[1]==password[0]) || (test[0] == password[0] && test[1] == password[1]))
			{
				flag1 = true;
				flag2 = true;
				break;
			}
		}
		if (test[0] == password[0] && test[1] == password[1])
		{
				flag1 = true;
				flag2 = true;
		}
		
		if(test[1] == password[0])
			flag1 = true;
		if(test[0] == password[1])
			flag2 = true;	
	}
	
	if (flag1 == true && flag2 == true)
		cout << "YES" << endl;
	if (flag1 == false || flag2 == false)
		cout << "NO" << endl;

	return 0;
}
 		   			 		 				 		 			 		  		