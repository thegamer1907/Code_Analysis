#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>

using namespace std;


int main(){
	int t,tb;
	
	int a[100];
	int b[100];
	int count=0;
	int c[101];
	
		
	for(int i=0;i<101;i++){
		c[i]=0;
		
		
	}
	
	cin>>t;
	
	for(int i=0;i<t;i++){
		cin>>a[i];
		
	}
	
	sort(a,a+t);
	
		cin>>tb;
	
	for(int j=0;j<tb;j++){
		cin>>b[j];
		
	}
	
	
	sort(b,b+tb);
	
	
	for(int i=0;i<t;i++){
		
		for(int j=0;j<tb;j++){
		           
	  if((abs(a[i]-b[j])==1 || a[i]==b[j]) && !c[j]){
	  
		count++;
		     
		   c[j]=1;
	        break;
          }		     
	   }
	}
	
	
	cout<<count<<endl;
	return 0;
	
	
	
}