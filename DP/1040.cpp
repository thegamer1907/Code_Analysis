#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	int A[n+1];
	int i;
	pair<int, int> B[n+1];
	B[0] = make_pair(0,0);
	int total_ones = 0;
	for(i=1;i<=n;i++){
	cin>>A[i];
	B[i] = make_pair(B[i-1].first+(A[i] == 0), B[i-1].second + (A[i] == 1));
// 	cout<<B[i].first<<" "<<B[i].second<<endl;
	total_ones+=(A[i] == 1);
	}
	
	int j;
// 	int maxi = -1;
	int max_ones = -1;
	for(i=1;i<=n;i++)
	{
	    
	    for(j=i;j<=n;j++)
	    {
	       //maxi = max(maxi, );
	       max_ones = max(max_ones, total_ones + B[j].first - B[i-1].first - ( B[j].second - B[i-1].second));
	    }
	}
	
	cout<<max_ones<<endl;
	
	
	
	
	return 0;
}
