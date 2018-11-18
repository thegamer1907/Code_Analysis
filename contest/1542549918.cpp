#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char c1[2];
	cin>>c1[0];
	cin>>c1[1];
	int n,flag=0;
	cin>>n;
	char c[n+1][2];
	for(int i=0;i<n;i++)
	{
		cin>>c[i][0];
		cin>>c[i][1];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{                 if(c[i][0]==c1[0]&&c[i][1]==c1[1])
		{
			flag=1;
			cout<<"YES";
			break;
		}
			if((c[i][1]==c1[0]&&c[j][0]==c1[1])||(c[i][0]==c1[1]&&c[j][1]==c1[0]))
			{
				flag=1;
				cout<<"YES";
				break;}
		}if(flag==1)
		break;
	}if(flag==0)
	cout<<"NO";
	return 0;
}