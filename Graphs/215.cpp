#include<string>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string line,output;
	vector<char> data;
	int length, time;
	cin >> length >> time >> line;
	for (int i = 0; i < length; ++i)
		data.push_back(line[i]);
	for (int i = 0; i < time; ++i)
	{
		for(int index=0;index<length-1;++index)
		{
			if ((data[index] == 'B') && (data[index + 1] == 'G'))
			{
				swap(data[index], data[index+1]);
				++index;
			}
		}
	}
	for (int i = 0; i < length; ++i)
		output += data[i];
	cout << output;
	//system("pause");
	return 0;
}