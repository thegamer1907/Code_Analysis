#include<bits/stdc++.h>
using namespace std;
	int n;
	char a,b,c,d,ad,bc;
int main()
{

	for(cin>>a>>b>>n;n--;)
	{
		cin>>c>>d,
		a==c&&b==d?ad=bc=1:0,
		ad|=a==d,
		bc|=b==c;
		
	}
	cout<<(ad&&bc?"YES":"NO");
}
