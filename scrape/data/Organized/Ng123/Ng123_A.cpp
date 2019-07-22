#include<iostream>
#include<cmath>
using namespace std;

bool cons(int a,int b,int c)
{
	if(2*a==b+c&&abs(b-c)==2)
	return true;
	else if(2*b==a+c&&abs(a-c)==2)
	return true;
	else if(2*c==a+b&&abs(a-b)==2)
	return true;
	
	else
	return false;
	
}

int main()
{
	
	
	
	string a,b,c;
	cin>>a>>b>>c;
	
	int a1,b1,c1;
	char a2,b2,c2;
	
	a1=a[0];
	a2=a[1];
	
	b1=b[0];
	b2=b[1];
	
	c1=c[0];
	c2=c[1];
	
	
	
	if(a2==b2&&b2==c2)
	{
		if(a1==b1&&b1==c1)
		cout<<0<<endl;
		
		else if(cons(a1,b1,c1))
		cout<<0<<endl;
		
		else if(a1==b1||b1==c1||c1==a1)
		cout<<1<<endl;
		
		else if(abs(a1-b1)<=2||abs(b1-c1)<=2||abs(c1-a1)<=2)
		cout<<1<<endl;
		
		else
		cout<<2<<endl;
		
		
		
	}
	
	else if(a2==b2||b2==c2||c2==a2)
	{
		if(a2==b2)
		{
			if(a1==b1)
			cout<<1<<endl;
			
			else if(abs(a1-b1)<=2)
			cout<<1<<endl;
			
			else
			cout<<2<<endl;
		}
		
		if(b2==c2)
		{
			if(b1==c1)
			cout<<1<<endl;
			
			else if(abs(b1-c1)<=2)
			cout<<1<<endl;
			
			else
			cout<<2<<endl;
			
		}
		
		if(c2==a2)
		{
			if(a1==c1)
			cout<<1<<endl;
			
			else if(abs(a1-c1)<=2)
			cout<<1<<endl;
			
			else
			cout<<2<<endl;
		}
	}
	
	else
	{
		cout<<2<<endl;
	}

		
	
	
	
	
	
	
	
}