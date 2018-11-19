#include <iostream>
using namespace std;
int main()
{
	int flag1,flag2,flag3,n;
	char a,b,c,d;
	while (cin>>a>>b)
	{
		flag1=flag2=flag3=0;
		cin>>n;
		for (int i=1;i<=n;i++)
		{
			cin>>c>>d;
			if (a==c&&b==d)
			flag3=1;
		    if (d==a)
		    flag1=1;
		    if (b==c)
		    flag2=1;
		    if (flag1&&flag2)
		    flag3=1;
		}
		if (flag3)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
