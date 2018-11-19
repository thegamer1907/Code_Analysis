#include<iostream>
#include <vector>
#include<math.h>
using namespace std;
int main(){
	int n,k,val,res=0;
	int i,j;
	cin>>n>>k;
	vector<int> dp(16,0);
	for(i=0;i<n;i++){
		res=0;
		for(j=0;j<k;j++){
			cin>>val;
			res=res*2+val;
		}
		dp[res]=1;
		
	}
	for(i=0;i<16;i++){
        for(j=0;j<16;j++){
            if(dp[i] & dp[j]&!(i&j)){
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";
	return 0;

}