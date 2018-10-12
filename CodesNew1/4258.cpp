#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<string>
#include<vector>
using namespace std;
vector<string> str;
int main()
{

	int n;
	cin>>n;
	int t=n;
	string temp;
	
	while(t--)
	{
		cin>>temp;
		str.push_back(temp);
	}
	
	for(int i=n-2;i>=0;i--)
	{
		
		if(str[i]>str[i+1])
		{
		    int j=0;
			while(j<min((int)str[i].size(),(int)str[i+1].size())&&str[i][j]<=str[i+1][j])
			{
				j++;
			}
			while(j<(int)str[i].size())
			{
				str[i][j]='\0';
				j++;
			}
		}
	     
	}
	     for(int i=0;i<n;i++)
	     {
	     	for(int j=0; j<(int)str[i].size()&&str[i][j]!='\0'; j++)
            cout<<str[i][j];
            
            cout<<endl;
		 }
}