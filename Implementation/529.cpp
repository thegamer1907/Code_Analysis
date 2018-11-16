#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >>a>>b;
	if (a==0)
	{
		cout<<"0";return 0;
	}
	int ar[a];
	for (int i =0; i<a ; i++)
	cin>>ar[i];
	int min=ar[b-1],total=0;
	for (int i =0; i<a ;i++)
	if (ar[i]>0 && ar[i]>=min)
	total++;
	cout<<total;
}