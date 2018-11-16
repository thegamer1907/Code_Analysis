#include<bits/stdc++.h>
#define sz(a) (int)a.size()
using namespace std;
int n,x,y;
int v[1000][1000];
main(){
	cin>>n>>x>>y;
	if(y<x)
		swap(x,y);
	int j=1;
	for(int i=1;i<=n;i++){
		v[j][i]=i;
	}
	while(n!=1){
		for(int i=1;i<=n;i+=2){
			//cout<<v[j][i]<<" "<<v[j][i+1];
			//return 0;
			if(v[j][i]==x&&v[j][i+1]==y){
				if(n==2)
					cout<<"Final!";
				else 
					cout<<j;
				return 0;
			}
		}
		for(int i=1;i<=n;i+=2){
			//cout<<(i+1)/2<<" ";
			if(v[j][i]==x||v[j][i+1]==x)
				v[j+1][(i+1)/2]=x;
			else if(v[j][i]==y||v[j][i+1]==y)
				v[j+1][(i+1)/2]=y;
			else 
				v[j+1][(i+1)/2]=v[j][i];
			
		}
		
		j++;n/=2;
	}
	}
	
	
	
