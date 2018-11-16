typedef long long int li;

#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<algorithm>
#include<climits>
#include<cmath>
#include<numeric>
      
using namespace std;
      
int main() 
{
	li n,maxsum=0,sum=0;
	
	cin>>n;
	
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		sum=accumulate(a,a+n,0);
		
		for(int j=i;j<n;j++)
		{
			if(a[j])
			sum--;
			else
			sum++;
			if(maxsum<sum)
			maxsum=sum;
		}
	}
	
	cout<<maxsum;
	
	return 0;
}