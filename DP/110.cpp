#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int b,g,y;
	
	vector <int> boy,girl;
	
	scanf("%d",&b);
	
	for(int i=0; i<b; i+=1){
		
		scanf("%d",&y);
		
		boy.push_back(y);
	}
	
	sort(boy.begin(),boy.end());
	
	scanf("%d",&g);
	
	for(int i=0; i<g; i+=1){
		
		scanf("%d",&y);
		
		girl.push_back(y);
	}
	
	sort(girl.begin(),girl.end());
	
	int Max=0,k=0;
	
	for(int i=0; i<b; i+=1){
		
		for(int j=k; j<g; j+=1){
			
			int x=abs(boy[i]-girl[j]);
			
			if(x<=1){
				
				k=j+1;
				
				Max+=1;
				
				break;
			}
		}
	}
	
	cout<<Max;
}
