/* ---------itz_me9---------- */
/* ---------ONLY GOD AND I KNOW WHAT I HAVE WRITTEN ----------*/
#include<bits/stdc++.h>
#define ll long long
#define hell 1000000007
#define vi vector<long long>

using namespace std;

int main()
{
	int n,t,i,j;
	cin >> n >> t;
	string s;
	cin >> s;
	for(i=0;i<t;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(s[j]=='B' && s[j+1]=='G')
			{
				char temp;
				temp = s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
				j++;
			}
		}
	}
	cout << s;
	return 0;
}