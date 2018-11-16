#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		int arr[55]={};
		for(int i=0;i<a;i++)
			cin>>arr[i];
		int c=0;
		for(int i=0;i<a;i++)
			if(arr[i]>=arr[b-1] && arr[i])c++;
		cout<<c<<endl;
	}
	return 0;
 } 
