#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;
	int main()
	{
		string x;
		int n,l1=0,l2=0,l=0;
		cin>>x>>n;
		string *w=new string [n];
		for(int i=0;i<n;i++)
		{
			cin>>w[i];
			if(w[i]==x)
				l++;
			if(w[i][0]==x[1])
				l1++;
			if(w[i][1]==x[0])
				l2++;
		}
		if(((l1>0)&&(l2>0))||(l>0))
			cout<<"YES";
		else
			cout<<"NO";
	return 0;
}