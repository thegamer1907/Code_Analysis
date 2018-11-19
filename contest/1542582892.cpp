#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm> //Algorithm

using namespace std;

int main()
{
	int h,m,s,t1,t2;
	while(scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2)!=EOF)
	{
		int i;
		bool f=false;
		t1=t1%12;
		i=t1;
		t2=t2%12;
		h=h%12;
		m=m/5;
		s=s/5;
		while(1)
		{        
			i=i%12;
			if(i==t2)
			{
				f=true;
				//cout<<"2"<<endl;
				break;
			}
			if(i==h||i==m||i==s)
			{
				break;
			}
			i++;
		}
		i=t1;
		while(1)
		{
			
			if(i==h||i==m||i==s)
			{
				if(i!=t1)
					break;
			}
			if(i==t2)
			{
				f=true;
				//cout<<"1"<<endl;
				break;
			}
			i--;
			if(i<0)
			{
				i+=12;
			}
		}
		if(f)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
		
	}
	return 0;
}
