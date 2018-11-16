#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main () 
{
	int n , sum = 0 ; 
	cin>>n;
	string num;
	cin >> num;
	for (int i = 0; i < num.length(); i++)
	{
		if (num[i] == num[i+1])
		{
			sum+=1;
		}
	}
	cout<<sum ;



}