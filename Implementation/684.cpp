#include <iostream>
#include <math.h>
#include <string>
using namespace std;
long n, k, c=0, i, m[1000];
int main ()
{
	cin>>n>>k;
	for (i=0; i<n; i++)
		cin>>m[i];
	while (m[c]>0 && m[c]>=m[k-1]) c++;
	cout<<c;

	
}
