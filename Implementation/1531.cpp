#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int a=0,b,c,d,s1=0,s2=0,k=0,n;
	char m[101];
	cin>>m;
	for(int i=0;;i++)
	{
		if(m[i]=='\0')break;
		if(m[i]=='1')
		{s2=0;
		s1++;
		}else{
			s1=0;
			s2++;
		}
		if(s1==7||s2==7){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
