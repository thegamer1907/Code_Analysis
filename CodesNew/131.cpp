#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int n, i=0, l;
	double max_dis=0;
	cin>>n>>l;
	vector<double> p(n);
	while(i<n)
	{
		cin>>p[i];
		i++;
	}
	sort(p.begin(), p.end());
	
	if(p[0]!=0)
	{
		max_dis = p[0];
	}
	if(p[n-1]!=l && max_dis<l-p[n-1])
	{
		max_dis = l-p[n-1];
	}
	for(i=0;i<n-1;i++)
	{
		if((p[i+1]-p[i])/2>max_dis)
		{
			max_dis = (p[i+1]-p[i])/2;
		}
	}
	printf("%.12lf\n", max_dis);
	return 0;
}