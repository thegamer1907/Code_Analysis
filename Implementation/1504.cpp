#include<bits/stdc++.h>

using namespace std;

int main(){
	char flag = '0';
	int n,clock = 0,flag2 = 0;
	string b;
	cin >> b;
	for(int i = 0;i < b.length();i++)
	{
		if (b[i] == flag)
		{
			clock++;
			if (clock == 7)
			{
				flag2 = 1;
				break;
			}
		}
		else
		{
			flag = b[i];
			clock = 1;	
		}
	}
	if (flag2 == 1)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}