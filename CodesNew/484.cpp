#include"cstdio"
#include"iostream"
#include"cstring"
#include"algorithm"
using namespace std;
int main()
{
	int n , k;
	int xx[100002];
	while(cin>>n>>k)
	{
		int a = 0 , b = 0;
		int c = 0;
		for(int i = 0 ; i < n ; i ++)
		{
			cin>>xx[i];
		}
		int d = 0;
		int j;
		for(int i = 0 ; i < n ; i ++)
		{
				//cout<<"dad"<<" ";
				a += xx[i];
			    b++;
				if(a > k )
				{
					a = a - xx[d++];
					b--;
					if(b > c)
						c = b;
					
				}
				
				
				if(i == n - 1)
				{
					if(b > c)
						c = b;
				}
			
			
		}
		cout<<c<<endl;
	}
	return 0;
} 