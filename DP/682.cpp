#include <iostream>
using namespace std;
int b,c[100001],n,m;
string a;
int main()
{
    cin>>a>>b;
    for(int i=a.size()-2; i>=0; i--)
	c[i]=c[i+1]+(a[i]==a[i+1]);
    while(b--)
	{
	cin>>n>>m;
	cout<<c[n-1]-c[m-1]<<"\n";
	}
}