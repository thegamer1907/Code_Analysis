#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	string st;
	cin>>st;
	int i,j;
	for(i=1;i<=t;i++){
		j=0;
		while(j<st.length()){
			if(st[j]=='B'&&st[j+1]=='G'){
				swap(st[j],st[j+1]);
				j=j+2;
			}
			else
			j++;
		}
	}
	cout<<st<<endl;
	return 0;
}