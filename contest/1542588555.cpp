#include <bits/stdc++.h>
using namespace std;


int main()
{
	string x;
	cin>>x;

	int n;
	cin>>n;

	string s[n];
	int  c1 = 0 , c2  = 0 , counter = 0;

	for(int i=0;i<n;i++){
		cin>>s[i];

		if(s[i] == x){counter = 1;}
		
	   if(s[i][0] == x[1])c1 = 1;

	   if(s[i][1] == x[0])c2 = 1;
	}

	if((c1 == 1 && c2 == 1) || counter ==1 )cout<<"YES";
	else cout<<"NO";



	return 0;
}