#include <iostream>
using namespace std;

void foo(long long n,long long x)
{
	if(x&1)
	{
		cout<<"1"<<endl;
		return;
	}
	
	long long num = 2;
	long long po = 1;
	
	while( num <= x)
	{
		if(x%num == 0)
		{
			po++;
		}
		num *= 2;
	}
	
	cout<<po<<endl;;
}

int main()
{

	long long n,k;
	cin>>n>>k;
	foo(n,k);
}