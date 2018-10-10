#include<bits/stdc++.h>

using namespace std;

double max(double a,double b){
	if(a<b)
		return b;
	else return a;
}

int main()
{
	long long int i,n,l,inp;
	cin >> n >> l;
	vector <long long int> arr;
	for(i=0;i<n;i++){
		cin >> inp ;
		arr.push_back(inp);
	}
	sort(arr.begin(),arr.end());
	long long dist=INT_MIN;
	for(i=1;i<n;i++){
		dist=max(dist,arr[i]-arr[i-1]);
	}
	double res=max(((double)dist)/2.0,(double)max(arr[0]-0,l-arr[n-1]));
	cout << setprecision(10) << res << endl;
}