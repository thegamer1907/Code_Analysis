#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	int M;
	cin>>M;
	int sum=M,maxval=0;
	int arr[N];
	for(int i=0;i<N;i++)
	{
	    int temp;
	    cin>>temp;
	    arr[i]=temp;
	    sum+=temp;
	    maxval=max(maxval,temp);
	}
	sort(arr,arr+N);
	int oriM=M;
	for(int i=0;i<N && M>0;i++)
	{
	    M-=(maxval-arr[i]);
	}
	M=max(M,0);
	cout<<ceil(M/double(N))+maxval<<" "<<maxval+oriM;
	return 0;
}
