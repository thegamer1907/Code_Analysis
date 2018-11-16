#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,i,j,okay=0;
	cin>>n;
	char a[n][5];
	
	for(i=0;i<n;i++)
		{
			for(j=0;j<5;j++)
				{
					cin>>a[i][j];
				}
		}
		
		for(i=0;i<n;i++)
		{
			
					if ( a[i][0]=='O' && a[i][1]=='O' )          
						{
							okay=5;
							a[i][0]='+';
							a[i][1]='+';
							break;
						}
						
					else if( a[i][3]=='O' && a[i][4]=='O' )	
						{
							okay=5;
							a[i][3]='+';
							a[i][4]='+';
							break;
						}
			
			if(okay==5)
				break;	
		}
		
		if(okay==5)
		{
			cout<<"YES"<<endl;
				for(i=0;i<n;i++)
					{
							for(j=0;j<5;j++)
								{
									cout<<a[i][j];
								}
							cout<<endl;
					}
			
		}
	else
		cout<<"NO"<<endl;	
		
}