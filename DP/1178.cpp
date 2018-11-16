#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,n,sum=0,max=-100000,one=0,zero=0,one1=0,zero0=0;
	cin>>n;
	int temp=0;
	vector<int> v(n,0);
	for(i=0;i<n;i++){
		cin>>v[i];
		if(v[i]==1){
			one++;
			v[i]=-1;
		}
		else{
			zero++;
			v[i]=1;
		}
	}
		for(i=0;i<n;i++){
			sum+=v[i];
			if(sum<0){
				sum=0;
				one1=0;
				zero0=0;
				continue;
			}
			if(v[i]==1)
				one1++;
			if(v[i]==-1)
				zero0++;	
			if(sum>max){
				max=sum;
				temp=one+one1-zero0;
			}
		}
		if(temp>0)
			cout<<temp;
		else{
			cout<<n-1;
		}	
	return 0;
}