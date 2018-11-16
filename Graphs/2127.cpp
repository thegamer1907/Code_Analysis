#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
 
int main () {
int n,m,i;
cin>>n>>m;
for(i=0;n!=m;i++)
{
	if(m>n)
	{
		if(m%2==0)m/=2;
		else m++;
	}
	else
	{
		m++;
	}
}
cout<<i;
}




