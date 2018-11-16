#include<bits/stdc++.h>
using namespace std;



int main()
{
	int n,t,i=0,j=0;
	cin>>n>>t;
	char s[n];
	for( i=0;i<n;i++)
		cin>>s[i];
//	for(j=0;j<n;j++)
//	{
//		if(s[j]=='B' && s[j+1]=='G')
//		{
//			for(i=j;i<j+t && i<n;i++)
//			{
//				if(i<n-1)
//					s[i]=s[i+1];
//				else
//					break;
//			}
//			s[i]='B';
//			//J=j+(t+1);
//		}
//	}

//	while(j<n)
//	{
//		if(s[j]=='B' && s[j+1]=='G')
//		{
//			for(i=j;i<j+t && i<n;i++)
//			{
//				if(i<n-1)
//					s[i]=s[i+1];
//				else
//					break;
//			}
//			s[i]='B';
//			j=j+t+1;
//		}
//		else
//			j++;
//	}

	while(t>0)
	{
		for(int i=0;i<n;i++)
		{
			if(s[i]=='B' &&  s[i+1]=='G')
			{
				char temp = s[i];
				s[i]=s[i+1];
				s[i+1]=temp;
				i++;
			}
//			else
//				i++;
		}
		t--;
	}
	
	for(i=0;i<n;i++)
		cout<<s[i];
	return 0;
}