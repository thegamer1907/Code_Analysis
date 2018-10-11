#include <iostream>
using namespace std;

int s, n, m, k, g, h;
string c[100009], x[100009];

int main()
{
	cin>>n>>m, g=n, h=m;
	for(int i=1; i<=n; i++)
		cin>>c[i];
	for(int i=1; i<=m; i++)
		cin>>x[i];
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			if(c[i]==x[j])
				s++;
		}
	}
	if(s%2==0)
		g-=s/2, h-=s/2; 	
	else
		g-=s/2, h-=(s/2)+1;
	if(g>h)
		cout<<"YES";
	else if(g<=h)
		cout<<"NO";
}
