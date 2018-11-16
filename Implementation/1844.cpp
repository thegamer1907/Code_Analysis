#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,c;
	cin>>n;
	vector<int> x,y,z;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		x.push_back(a),y.push_back(b),z.push_back(c);
	}
	if(accumulate(x.begin(),x.end(),0)==0 && accumulate(y.begin(),y.end(),0)==0
	&& accumulate(z.begin(),z.end(),0)==0){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}
