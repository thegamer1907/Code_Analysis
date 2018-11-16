#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define N 100010
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;
int main()
{
	int a,l;
	cin>>a>>l;
	string str;
	cin>>str;
	for(int i = 0;i<l;i++)
	{
		for (int j = 0; j < a; j++)
		{
			if(str[j]=='B' && str[j+1]=='G')
			{
				str[j]='G';
				str[j+1]='B';
				j++;
			}
		}
	}
	cout<<str;	
}