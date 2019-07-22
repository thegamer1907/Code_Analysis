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

	long long int n,m,k,count=0,temp,temp1;

	cin>>n>>m>>k;
	vector<long long int> inp(m);

	for(int i=0;i<m;i++)
		cin>>inp[i];

	temp=k;
	temp1=0;
	for(int i=0;i<m;i++){
		if(inp[i]<=temp){
			temp1++;
			if(i==m-1)
				count++;
		}
		else
			if(inp[i]>temp){
				if(temp1>0){
					count++;
					temp=min(temp+temp1,n);
				}
				else
					temp=min(temp+k,n);

				//cout<<temp<<" "<<count<<endl;
				temp1=0;
				i--;
				
			}
	}

	cout<<count;


	return 0;
}