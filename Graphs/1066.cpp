#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,pos;
	cin>>n>>pos;
	int a[n];
	pos--;

	for(int i=0; i<n-1; ++i){
		cin>>a[i];
	}
	int s=0;
	for(int i=0; i<n-1; ++i){
		s+=a[s];
		if(s == pos){
			cout<<"YES"<<endl;
			return 0;
		}
		else if(s>pos){
			cout<<"NO"<<endl;
	        return 0;
		}
		
	}

	
}