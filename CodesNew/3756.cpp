#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;



int main() 
{
	int n,m,ma,min=0,i,min1=0,min2=1;
	cin>>n;
	cin>>m;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	sort(a,a+n);
	ma = a[n-1]+m;
	
	while(m>0)
	{
	    for(i=0;i<(n);i++)
	    {
	        if(a[min1]>a[i])
	        {
	            min1 = i;
	            break;
	        }
	    }
	    m--;
	    a[min1]++;
	    min1 = 0;
	}
	
	min = *max_element(a,a+n);
	cout<<min<<" "<<ma;
}