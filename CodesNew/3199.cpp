#include <bits/stdc++.h>
using namespace std;

int main (int argc, char const* argv[])
{
    int n,k;
    cin>>n>>k;
    
    int arr[n], cumm[n];
    
    for(int i = 0; i < n; i++)	cin>>arr[i];
    cumm[0] = (arr[0] == 1) ? 0 : 1;
    
	for(int i = 1; i < n; i++)
		cumm[i] = (arr[i] == 0) ? 1+cumm[i-1] : cumm[i-1];
		
	int i = 0, max_ans = 0, ind = 0;
	
	while(i < n && cumm[i] <= k) i++;
	max_ans = i;
	i = 1;
	
	for(int j = 1; j < n; j++){
	
		while(j < n && cumm[j] - cumm[i-1] <= k) j++;
		
		if(max_ans < j-i) {
			max_ans = j-i;
			ind = i;
		}
		
		while(i < n && cumm[j] - cumm[i-1] > k) i++;
	}
	
	
	cout<<max_ans<<endl;
	
	//cout<<i<<endl;
	for(int j = ind; j < ind+max_ans && j < n; j++){
		arr[j] = 1;
	}
	
	for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
	cout<<endl;
	
    return 0;
}
