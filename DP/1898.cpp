#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	bool blAB = false, blBA = false;
	cin >> str;
	string str2 = str;
	for (int i(0); i<str.size() - 1; i++)
		if (str[i] == 'A'&&str[i + 1] == 'B'&&blAB == false)
		{
			blAB = true;
			str[i] = '$';
			str[i + 1] = '$';
		}
		else if (str[i] == 'B'&&str[i + 1] == 'A'&&blBA == false)
		{
			blBA = true;
			str[i] = '$';
			str[i + 1] = '$';
		}
	bool blAB2 = false, blBA2 = false;
	for (int i(str2.size()-1); i>0; i--)
		if (str2[i] == 'A'&&str2[i - 1] == 'B'&&blAB2 == false)
		{
			blAB2 = true;
			str2[i] = '$';
			str2[i - 1] = '$';
		}
		else if (str2[i] == 'B'&&str2[i - 1] == 'A'&&blBA2 == false)
		{
			blBA2 = true;
			str2[i] = '$';
			str2[i - 1] = '$';
		}
	if (blBA&&blAB||blBA2&&blAB2)
		cout << "YES" << endl;
	else cout << "NO" << endl;
	//system("pause");
	return 0;
}