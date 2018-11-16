#include <iostream>
using namespace std;

int main() {
	// your code goes here
	cin.tie(NULL);
	int n;
	int T;
	cin>>n>>T;
	string str;
	cin>>str;
	
	while(T--)
	{
		int i=0;
			while(i+1<str.size())
			{
				if(str[i]=='B' && str[i+1]=='G')
				{
					char temp=str[i];
					str[i]=str[i+1];
					str[i+1]=temp;
					i+=2;
				}
				else
				{
					i++;
				}
			}
	}
	cout<<str<<endl;
	return 0;
}