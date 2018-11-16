#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	int n;
	cin>>n;
	int a,count=0,b[n],z=0;
	for(int i=0;i<n;++i){
		cin>>a;
		b[i]=((a==0)?1:-1);
		if(a>0)
		count++;
		if(a==0)
			z=1;
	}
	if(b[0]<0){
		b[0]=0;
	}
	else{
		b[0]=1;
	}
	int max=b[0];
	for(int i=1;i<n;++i){
		if(b[i]+b[i-1]<0){
			b[i]=0;
		}
		else{
			b[i]=b[i]+b[i-1];
			if(max<b[i]){
				max=b[i];
			}
		}
	}
	if(z==0){
		cout<<count-1;
	}
	else
	cout<<count+max;
}