
 #include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int x[30000];
	for (int i=0;i<a-1;i++)
	{
		cin>>x[i];
	}
	int i=1,j=0;
	while (true)
	{
		if (i==b)
		{
			cout << "YES"<<endl;
			return 0;
		}
		else if (i>b)
		{
			cout << "NO"<<endl;
			return 0;
		}
		else
		{
			i+=x[j];
			j+=x[j];
		}
	}
	return 0;
}
