#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<vector>
#include<algorithm>
#include<climits>
#include<string>
#include<set>
#include<queue>
#include<unordered_map>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	long long int n,m,k,count=0,reach,sum,j;

	cin>>n>>m>>k;
	vector<long long int> inp(m);

	for(int i=0;i<m;i++)
		cin>>inp[i];

	reach=0;
	sum=0;
	j=0;

	while(j<m){
		reach=((inp[j]-sum-1)/k+1)*k + sum;

		while(inp[j]<=reach && j<m){
			sum++;
			j++;

		}
		count++;
	}

	cout<<count;


	return 0;
}